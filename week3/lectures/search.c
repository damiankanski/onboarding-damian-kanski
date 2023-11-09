#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declarate array
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // assk user for  numeber
    int n = get_int("Please add your numebr: ");
    for (int i = 0; i <7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Ok %i is found.\n", n);
            return 0; // good habits if we add return 0 when we find it code is done
        }

    }
    printf("We do not found %i in array.\n", n);
    return 1; // good habits if we return 1 for example with error or as in this expalme when we do not find n
}
