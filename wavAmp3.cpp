#include <stdio.h>
#include <lame.h>

int main() {
    lame_t lame = lame_init();
    lame_set_in_samplerate(lame, 44100);
    lame_set_VBR(lame, vbr_default);
    lame_init_params(lame);

    FILE *wav_file = fopen("audio.wav", "rb"); // Abre el archivo input.wav en modo lectura binaria
    FILE *mp3_file = fopen("nuevo.mp3", "wb"); // Abre el archivo output.mp3 en modo escritura binaria

    // Convertimos el audio de WAV a MP3
    short pcm_buffer[2 * 1152];
    unsigned char mp3_buffer[4096];
    int read, write;
    do {
        read = fread(pcm_buffer, 2 * sizeof(short), 1152, wav_file);
        if (read == 0) {
            write = lame_encode_flush(lame, mp3_buffer, sizeof(mp3_buffer));
        } else {
            write = lame_encode_buffer_interleaved(lame, pcm_buffer, read, mp3_buffer, sizeof(mp3_buffer));
        }
        fwrite(mp3_buffer, write, 1, mp3_file);
    } while (read != 0);

    fclose(wav_file); // Cierra el archivo de entrada
    fclose(mp3_file); // Cierra el archivo de salida

    lame_close(lame);
    return 0;
}
