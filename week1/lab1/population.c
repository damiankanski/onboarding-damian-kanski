#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
         n = get_int("How many lamas do you have? \n");
    }
    while (n < 9);

    // TODO: Prompt for end size
    int m;
    {
        m = get_int("How many lamas do you want to have ?\n");
    }
    while (m <= n)
        ;
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (n < m)
    {
        n += n / 12;
        years++;
    }
    // TODO: Print number of years
    printf("Year: %i\n", years);
}
