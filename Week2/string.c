#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string name = "Emma";

    int lenght = strlen(name);

    for (int i = 0; i < lenght; i++)
    {
        printf("%c\n", name[i]);
    }
    printf("\n");
}
