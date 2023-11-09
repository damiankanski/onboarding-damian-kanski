#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promot user to agree
    char c = get_char("Do you agree? ");

    // Check wheter user agreed
    if (c == 'y' or c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' or c == 'N')
    {
        printf("Not agreed.\n");
    }

}