#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2) // pierwszy zawsze ./ drugi to nazwa pliku dla argc
    {
        printf("Improper usage.\n");
        return 1;
    }

    //open file
    // w tym przyapdku przypisujemy nazwe otwiertanego pliku argv[0] =./ argv[1] = nazwa_pliku
    string filename = argv[1];
    // otiweramy plik w "r" -read mode nie mozemy dodawac danych "w" - wrte mode mozemy zmeinaic i dodoawac dane
    FILE *file = fopen(filename, "r");

    // sprawdzamy czy plik isntnieje
    if (file == NULL)
    {
        printf("No such file found.\n");
        return 1;
    }

    // spacjlny typ do przechowaywania danych  pdf u - unsigne tylko dodatni int -iteger 8- ilosb bajtow czyli 8 _t -together oznacza ze laczy u,int,8 razem.
    //PDf zaczyna sie specjalnym kodem takm podisem skladajacych sie z 4 cyft dlatego w buffer podajemy [4]
    uint8_t buffer[4];
    // tworzymy podpis dla pdf
    uint8_t signature[] = {37, 80 ,68, 70};
     fread(buffer, 1, 4, file);
     // sprawdzamy czy plik ktorty chemy otowrzyc to pdf poprwnojemy signatures z pliku do naszego stowrzonego w ktoym zamiescilismy specjalny kod dla pdf
     for (int i = 0; i < 4; i++)
     {
        if (buffer[i] != signature[i])
        {
            printf("Lilely not a pdf.");
            fclose(file);
            return 0;
        }

        // Wazne jest aby pamietac, zeby zamykac otwarty plik dzieki czemu zwolnimy pamiecprintf("Likely pdf");
        fclose(file);
        return 0;
     }
     printf("\n");

     // Wazne jest aby pamietac, zeby zamykac otwarty plik dzieki czemu zwolnimy pamiec


}


