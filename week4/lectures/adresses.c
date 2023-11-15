#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     int n = 50;
//     // we use %p and &n to obtain adress in mamemory where is located variable n
//     printf("%p\n", &n);
// }

//another way to obtein memory adress
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}
