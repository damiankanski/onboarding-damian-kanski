#include <cs50.h>
#include <stdio.h>

int factorial(int number);

int main(void)
{
    printf("Hello ! Base of your number this program return factorial.\n");
    int number = get_int("Plese enter your number: ");
    printf("Factorial: %i\n", factorial(number));

}

int factorial(int number)
{
    if (number ==1)
    {
        return 1;
    }
    return number * factorial(number -1);

}
