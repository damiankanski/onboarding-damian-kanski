#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //jaka jest wielkosc naszej tablicy nie moze byc ujemna
    int lg;
    do
    {
        lg = get_int("Ile liczb masz zamiar podac ? ");
    }
    while (lg < 1);

    // Tworzenie tablicy o wymiarach podanych prze uzytkownika
    int numbers[lg];

    //Definicja pierwszej wartosci
    numbers[0] = 1;
    printf("%i\n", numbers[0]);

    //Dekalrowanie kolejnych zmiennyc przez mnozenie poprzedniej x2
    for (int i = 1; i < lg; i++)
    {
        numbers[i] = 2 * numbers[i - 1];
        printf("%i\n", numbers[i]);

    }

}