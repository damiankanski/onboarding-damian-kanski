#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print grid of bricks
    // This forr adde new line with #
    for (int i = 0; i < n; i++)
    {
        // Add space. This for is responsible for added blank
        for(int k = (n -1); k > i; k--)
        {
            printf(" ");
        }
        // Thi for is responsible for added # with one less with next cycle
        for (int j = 0; j <= i ; j++)
        {
            printf("#");
        }

        printf("  ");
        for (int z = 0; z <= i ; z++)
        {
            printf("#");
        }
        printf("\n");
    }
}