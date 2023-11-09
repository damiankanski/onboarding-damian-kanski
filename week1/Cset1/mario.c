#include <stdio.h>
#include <cs50.h>

int main(void)
{

    const int N = 5;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}