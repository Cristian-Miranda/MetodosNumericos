#include <iostream>
#include <fstream>
#include "portaudio.h"
#include <math.h> // Nueva línea

using namespace std;

// Definir los parámetros del audio
const int SAMPLE_RATE = 44100;
const int FRAMES_PER_BUFFER = 64;
const int NUM_CHANNELS = 1;

// Estructura para almacenar los datos de audio
struct AudioData {
    float* samples;
    int frameIndex;
    int maxFrames;
};

// Función de callback de PortAudio para reproducir el audio
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
    const int duration = 5; // duración en segundos
    const int numFrames = SAMPLE_RATE * duration;
    const float frequency = 440.0f; // frecuencia del tono en Hz

    // Crear buffer de audio
    AudioData data;
    data.samples = new float[numFrames];
    data.frameIndex = 0;
    data.maxFrames = numFrames;

    for (int i = 0; i < numFrames; i++) {
        data.samples[i] = sin(2.0 * M_PI * frequency * i / SAMPLE_RATE); // Generar tono sinusoidal
    }

    // Crear archivo WAV
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
    int byteRate = SAMPLE_RATE * NUM_CHANNELS * 2;
    file.write((char*)&byteRate, 4);
    short blockAlign = NUM_CHANNELS * 2;
    file.write((char*)&blockAlign, 2);
    short bitsPerSample = 16;
    file.write((char*)&bitsPerSample, 2);
    file.write("data", 4);
    file.write((char*)&numFrames, 4);
    file.write((char*)data.samples, numFrames * 2);
    file.close();

    // Inicializar PortAudio
    Pa_Initialize();

    // Abrir el stream de audio
    PaStream* stream;
    Pa_OpenDefaultStream(&stream, 0, NUM_CHANNELS, paFloat32, SAMPLE_RATE, FRAMES_PER_BUFFER, audioCallback, &data);

    // Iniciar la reproducción
    Pa_StartStream(stream);

    // Esperar hasta que se termine la reproducción
    while (Pa_IsStreamActive(stream)) {
        Pa_Sleep(100);
    }

    // Cerrar el stream y liberar memoria
    Pa_StopStream(stream);
    Pa_CloseStream(stream);
    Pa_Terminate();
    delete[] data.samples;

    return 0;
}
