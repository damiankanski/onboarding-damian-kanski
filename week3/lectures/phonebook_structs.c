#include <cs50.h>
#include <stdio.h>
#include <string.h>


// we cane define the our structure type as in example below

typedef struct // declarate
{
    string names;
    string numbers;
}
person; // name of structures




int main(void)
{
    //declarate phonebook
    person people[3]; // delcaret person structure as name people with size 3

    people[0].names = "Damian";
    people[0].numbers = "555666777";

    people[1].names = "Wika";
    people[1].numbers = "444555666";

    people[2].names = "Kuba";
    people[2].numbers = "333444555";



    // sizeof we can declarate the number of itmes in array ( lenght of array)
    int ln = sizeof(people) / sizeof(people[0]);;

    // as user for whoes number is he lookig for ?
    printf("Whoes number are you lookig for? \n");
    string name = get_string("Name:  ");
    for (int i = 0; i < ln; i++)
    {
        // comper name and names in array
        if (strcmp(people[i].names, name) == 0)
        {
            printf("Ok we found %s.\n", name);
            printf("Number: %s\n", people[i].numbers);
            return 0;

        }
    }
    printf("W canot find %s in our phonebook", name);
    return 1;
}
