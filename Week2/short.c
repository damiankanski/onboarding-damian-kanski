#include <cs50.h>
#include <stdio.h>

//Definiuje funkcje
int add_two_ints(int a, int b);

int main(void)
{
    printf("Podaj dwie liczby, nastepnie program zwroci ich sume\n");
    //peirwsza zmienna podana przez uzytkownika
    int a = get_int("Podaj pierwsza liczbe: ");
    //druga zmienna podana przez uzytkownika
    int b = get_int("Podaj druga liczbe: ");

    // dodawanie przy wukorzystaniuzdefiniowanej funckji
    int z = add_two_ints(a, b);

    //Wyswiettlanie wyniku dodawania
    printf("Suma %i + %i = %i\n", a, b, z);

}

//Zdefiuniwana funckaj i algorytm
int add_two_ints(int a, int b)
{
    // dekalruje typ danych zmiennej oraz algorytm
    int addition = a + b;
    return addition;
}