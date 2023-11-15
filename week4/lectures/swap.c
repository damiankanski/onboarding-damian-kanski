#include <stdio.h>

// deklarujemy fuckjie prototype
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}


// the swap below do not work correctly becouse we do not have appeal to the memmory space and the copy do not work correctly but logic is correct
// void swap(int a, int b)
// {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }


//  to do correct swap we neeed to use * to swap the agrument in the memory. go to a go to b ...
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
