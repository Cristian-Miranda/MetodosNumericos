
#include <iostream>
#include <fstream>
#include "portaudio.h"
#include <math.h>

using namespace std;

const int SAMPLE_RATE = 44100;
const int FRAMES_PER_BUFFER = 64;
const int NUM_CHANNELS = 1;

struct AudioData {
    float* samples;
    int frameIndex;
    int maxFrames;
};

static int audioCallback(const void* inputBuffer, void* outputBuffer, unsigned long framesPerBuffer, const PaStreamCallbackTimeInfo* timeInfo, PaStreamCallbackFlags statusFlags, void* userData) {
    AudioData* data = (AudioData*)userData;
    float* out = (float*)outputBuffer;
    int numFrames = framesPerBuffer;

    if (data->frameIndex + numFrames > data->maxFrames) {
        numFrames = data->maxFrames - data->frameIndex;
    }

    for (int i = 0; i < numFrames; i++) {
        *out++ = data->samples[data->frameIndex++];
        if (NUM_CHANNELS == 2) {
            *out++ = data->samples[data->frameIndex++];
        }
    }

    if (data->frameIndex >= data->maxFrames) {
        return paComplete;
    }

    return paContinue;
}

int main() {
    const char* filename = "audio.wav";
    const int duration = 5;
    const int numFrames = SAMPLE_RATE * duration;
    const float frequency = 1.0f; // Frecuencia de la función de onda en Hz
    const float period = 1.0f / frequency; // Periodo de la función de onda en segundos
    const float samplePeriod = 1.0f / SAMPLE_RATE; // Periodo de muestreo en segundos
    const float samplePeriodsPerWave = period / samplePeriod; // Número de periodos de la función de onda en cada muestra

    AudioData data;
    data.samples = new float[numFrames];
    data.frameIndex = 0;
    data.maxFrames = numFrames;

    for (int i = 0; i < numFrames; i++) {
        float t = i * samplePeriod;
        float wave = (t / period) - floor(t / period); // Función de onda cuadrada
        data.samples[i] = wave * 2.0f - 1.0f; // Escalar la función de onda a valores entre -1 y 1
    }

    ofstream file(filename, ios::binary);
    file.write("RIFF", 4);
    file.write((char*)&numFrames, 4);
    file.write("WAVE", 4);
    file.write("fmt ", 4);
    int subchunk1Size = 16;
    file.write((char*)&subchunk1Size, 4);
    short audioFormat = 1;
    file.write((char*)&audioFormat, 2);
    short numChannels = NUM_CHANNELS;
    file.write((char*)&numChannels, 2);
    int sampleRate = SAMPLE_RATE;
file.write((char*)&sampleRate, 4);
int byteRate = SAMPLE_RATE * NUM_CHANNELS * sizeof(float);
file.write((char*)&byteRate, 4);
short blockAlign = NUM_CHANNELS * sizeof(float);
file.write((char*)&blockAlign, 2);
short bitsPerSample = 8 * sizeof(float);
file.write((char*)&bitsPerSample, 2);
file.write("data", 4);
file.write((char*)&numFrames, 4);
file.write((char*)data.samples, numFrames * sizeof(float));
file.close();

PaError err = Pa_Initialize();
if (err != paNoError) {
    cerr << "Error initializing PortAudio: " << Pa_GetErrorText(err) << endl;
    return 1;
}

PaStream* stream;
err = Pa_OpenDefaultStream(&stream, 0, NUM_CHANNELS, paFloat32, SAMPLE_RATE, FRAMES_PER_BUFFER, audioCallback, &data);
if (err != paNoError) {
    cerr << "Error opening PortAudio stream: " << Pa_GetErrorText(err) << endl;
    return 1;
}

err = Pa_StartStream(stream);
if (err != paNoError) {
    cerr << "Error starting PortAudio stream: " << Pa_GetErrorText(err) << endl;
    return 1;
}

Pa_Sleep(duration * 1000);

err = Pa_StopStream(stream);
if (err != paNoError) {
    cerr << "Error stopping PortAudio stream: " << Pa_GetErrorText(err) << endl;
    return 1;
}

err = Pa_CloseStream(stream);
if (err != paNoError) {
    cerr << "Error closing PortAudio stream: " << Pa_GetErrorText(err) << endl;
    return 1;
}

err = Pa_Terminate();
if (err != paNoError) {
    cerr << "Error terminating PortAudio: " << Pa_GetErrorText(err) << endl;
    return 1;
}

delete[] data.samples;

return 0;
}

