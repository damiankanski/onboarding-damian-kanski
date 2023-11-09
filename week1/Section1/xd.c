#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //User name
    string name = get_string("Give your name: \n");

    // User age
    int age = get_int("Give your age \n");

    // User phone number
    string number = get_string("Give you phone numebr: \n");

    // Phone book date
    printf("Hello this is your phonebook !\n");
    printf("Name: %s\t\n", name);
    printf("Age: %i\t\n", age);
    printf("Phone number: %s\t\n", number);

}