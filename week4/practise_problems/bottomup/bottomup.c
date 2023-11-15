// Copies a BMP file

#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // Ensure proper usage
    // musimy podac przy ./ i jeszcze dwa argumenty inaczej zwroci nam to co ponizej
    if (argc != 3)
    {
        printf("Usage: ./reverse input.wav output.wav\n");
        return 1;
    }

    // Remember filenames
    // przypisujemy te dwa arumenty do zmienniej type * czyli wskazujemy miejsce w pamieci gdzie zapisane sa nasze pliki for exampe infile 0xa uotfile oxb
    char *infile = argv[1];
    char *outfile = argv[2];

    // Open input file
    // otwieramy plik za pomoca fopen tylko do odczytu bo jest r i
    FILE *inptr = fopen(infile, "r");
    // dodjamy zabezmieczeni zeby nie zworcilo nam errora z segmentacja
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // Open output file
    // otwieramy plik z argumentu 2 w write wiec mozemy w nic cos nadpisac
    FILE *outptr = fopen(outfile, "w");
    // analogicznie wprowadzamy zabezpieczneie
    if (outptr == NULL)
    {
        // jezeli jest null zamykamy plik z rrgv[i] i zwracamy info z print
        fclose(inptr);
        printf("Could not create %s.\n", outfile);
        return 3;
    }

    // Read infile's BITMAPFILEHEADER
    // tworzymy zmieninna bf na ktorej typem danych jest struktura BITMAPFILEHEADER
    // nastepnie odczytujemy co znajduje sie w nazszym obrazie z intptr
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // Read infile's BITMAPINFOHEADER
    // tworzymy zmienna bi na podstawie BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // Ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    // sprwdzamy czy plik jest w odpowiednich formatach
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        printf("Unsupported file format.\n");
        return 4;
    }

    // wartosci bi hight jest umjemna musimy zmienic ja na ujemna przez co odwrocimy nasz plik
    bi.biHeight = - bi.biHeight;

    // Write outfile's BITMAPFILEHEADER
    //struktura do zapisywania
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // Write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // Determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    // Iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {
        // Iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth; j++)
        {
            // Temporary storage
            RGBTRIPLE triple;

            // Read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

            // Write RGB triple to outfile
            fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
        }

        // Skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);

        // Then add it back (to demonstrate how)
        for (int k = 0; k < padding; k++)
        {
            fputc(0x00, outptr);
        }
    }

    // Close infile
    fclose(inptr);

    // Close outfile
    fclose(outptr);

    // Success
    return 0;
}
