#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int lenght;
    do
    {
        lenght = get_int("Lenght: ");
    }
    while (lenght < 1);

    int twice[lenght];

    twice[0] = 1;

    printf("%i\n", twice[0]);

    for (int i = 1; i < lenght; i++)
    {
        twice[i] =twice[i - 1] * 2;

        printf("%i\n", twice[i]);
    }
}
