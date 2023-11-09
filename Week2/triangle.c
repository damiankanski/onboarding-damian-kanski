#include <cs50.h>
#include<stdio.h>

bool triangle(int a, int b, int c);

int main(void)
{
    printf("Give 3 sides of the triangle\n");
    int a = get_int("First: \n");
    int b = get_int("Second: \n");
    int c = get_int("Third: \n");

    bool check = triangle(a, b, c);
    if (check)
    {
        printf("You can prepare triange");
    }
    else
    {
        printf("You cannot prepare triangle");
    }
}


bool triangle(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return false;
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    return true;
}
