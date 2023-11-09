#include <cs50.h>
#include <stdio.h>

float discount(float price)
(
    return price * .85;
)

int main(void)
{
    float regular = get_float("Regular price: ");
    float sale = discount(regular);
    printf("Sales price: %.2f\n", sale);
}
