#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string name = get_string("Name: ");
    int lenght = strlen(name);

    char last_char = name[lenght - 1];
    //int last_char = name[lenght - 1] -48; //odejmujemy
    printf("%s\n", name);
    printf("%i\n", lenght);
    printf("%c\n", last_char);
    //printf("%i\n", last_char);
}
