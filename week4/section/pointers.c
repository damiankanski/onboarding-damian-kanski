#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gdzies w przestrzeni pamieci twoorzymy zmienna a i b  i przypisuejmy jej wartosci natomiast ich wartosc jst losowy
    int a = 28;
    int b = 50;
    // int *c to pointer na liczbe rzeczywsita o name c ktoremu przypisany jest adres ze zmiennej a
    int *c = &a;


    // *p czy w tym przyapdku *c go to idz do *c czyli do adresu dla zmiennej a i dla tego adresu w pamieciu przypisz wartosc 14 co spowoduje nadpisanie dla a 28 na 14
    *c = 14;
    //upadte c teraz c wskzuje na adress w w pamieci gdzie zapisaa jest  zmienna b i przypisujemy ja do c
    c = &b;
    // idz do c tam gdzie wskazuej *c czyli do adressu w tym przypadku bedzie to juz adress dla b i zmien wartosc na 25
    *c = 25;

    //resultat

    printf("a value: %i, location: %p\n", a, &a);
    printf("b value: %i, location: %p\n", b, &b);
    printf("c value: %p, location: %p\n", c, &c);

}
