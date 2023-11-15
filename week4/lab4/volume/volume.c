 // Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    // tworzymy przestrzen do kopiowania
    uint8_t headerbuffor[44];
    // kopijuemy headrer z pliku input
    fread(headerbuffor, sizeof(uint8_t), HEADER_SIZE, input);
    //wprowadamy header z input i zapisujemy go w pliku output
    fwrite(headerbuffor, sizeof(uint8_t), HEADER_SIZE, output);


    // TODO: Read samples from input file and write updated data to output file
    // tworzymy przestrzen do modyfikacji glosnosci
    int16_t buffor;
    //zeby poadac adrees pierwszego miajesca w buugo musimy dodoac & poniewaz tu zrobilismy zmienna na nie tanlice
    while (fread(&buffor, sizeof(int16_t), 1, input) == 1 )
    {
        // nadpisujemy wartosc mnozac przez poadana nasz factor
        buffor *= factor;
        // zapisuemy do pliku
        fwrite(&buffor, sizeof(int16_t), 1, output);
    }


    // Close files
    fclose(input);
    fclose(output);
}
