#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("Whats youe name? ");
    printf("Hello, %s\n", answer);
    return 0;
}