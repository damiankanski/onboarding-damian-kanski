#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Wrong usage: Try ./ceate [filename]");
        return 1;
    }

    int filename_lenght = strlen(argv[1]);

    // vreat new block of memory
    char *filename = malloc(sizeof(char) * (filename_lenght + 1));

    //copy argv[1] into block of memory for filename
    sprintf(filename, "%s", argv[1]);

    //open new file under the smae stored at filename
    FILE *new_file = fopen(filename, "w");
    if (new_file == NULL)
    {
        printf("Could not create file.\n");
        return 1;
    }

    fclose(new_file);
    free(filename);
}
