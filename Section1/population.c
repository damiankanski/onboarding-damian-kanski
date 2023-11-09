#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Promting the uder for sterting of lamas
    int n = get_int("How many lamas do you have? \n");

    //promting for an ending of lamas
    int m = get_int("How many lamas do you want to have ?\n");

    //How many years will it take to get the goal?
    int years = 0;
    while(n < m)
    {
        n += n / 12;
        years++;
    }
    printf("Year: %i\n", years);

}