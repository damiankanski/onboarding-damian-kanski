#include <cs50.h>
#include <stdio.h>

int main(void)
{

    //Prompt user x
    int x = get_int("x: ");

    //prompt user y
    int y = get_int("y: ");

    //prompt additional
    printf("%i\n", x + y );

}