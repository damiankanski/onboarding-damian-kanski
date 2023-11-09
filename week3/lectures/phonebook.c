#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //declarate phonebook
    string names[] = {"Damian", "Wika", "Kuba"};
    string numbers[] = {"555666777", "444555666", "333444555"};

    // sizeof we can declarate the number of itmes in array ( lenght of array)
    int ln = sizeof(names) / sizeof(names[0]);;

    // as user for whoes number is he lookig for ?
    printf("Whoes number are you lookig for? \n");
    string name = get_string("Name:  ");
    for (int i = 0; i < ln; i++)
    {
        // comper name and names in array
        if (strcmp(names[i], name) == 0)
        {
            printf("Ok we found %s.\n", name);
            printf("Number: %s\n", numbers[i]);
            return 0;

        }
    }
    printf("W canot find %s in our phonebook", name);
    return 1;
}
