#include <cs50.h>
#include <stdio.h>

int main(void)
{

    const int MINE = 2;
    int points = get_int("How many point did you lost?\n");

    if (points < 2)
    {
        printf("You lost fewe points then me.\n");
    }

    else if (points > 2)
    {
        printf("You lost more points then me.\n");
    }

    else
    {
        printf("You lost as many point as me.\n");
    }

}