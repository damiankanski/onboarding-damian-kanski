#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


//wczyatnie stowrzonej funkcji
float calculate_hours(int hours[], int weeks, char output);

int main(void)
{
    //ilosc tygodni podana przez uzytkownika
    int weeks = get_int("Podaj ilosc tygodni: ");

    //tworzenie tablicy na podstawie ilosci tygodni
    int hours[weeks];
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW hourse: ", i);
    }

    //uzytwkonik pytany jest co chce miec obliczone
    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average per week"));
    }
    while(output != 'T' && output != 'A');

    printf("%.1f hours\n", calculate_hours(hours, weeks, output));


}

//Dekalrujemy funkcje z algorytmami
float calculate_hours(int hours[], int weeks, char output)
{
    int totalh = 0;
    for (int i = 0; i < weeks; i++)
    {
        totalh += hours[i];
    }
    if( output == 'T')
    {
        return (float) totalh;
    }
    return (totalh / weeks);



}