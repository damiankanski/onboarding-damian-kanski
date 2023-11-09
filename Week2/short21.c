#include <cs50.h>
#include<stdio.h>

// declarate fuction
int add_two_ints(int a, int b);


// main function
int main(void)
{
    int x = get_int("Number1: ");
    int y = get_int("Number2: ");
    int z = add_two_ints(x, y);

    printf("The sum of your number is %i.", z);
    printf("\n");
}


// function with logic
int add_two_ints(int a, int b)
{
    int addition = a + b;
    return addition;
}
