#include <cs50.h>
#include <stdio.h>
#include <string.h>


// comper two intigers
// int main(void)
// {
//     int i = get_int("i: ");
//     int j = get_int("j: ");

//     if (i ==j)
//     {
//         printf("Same.\n");
//     }
//     else
//     {
//         printf("Not the same.\n");
//     }
// }


// int main(void)
// {
//     // we caanot compare to words becouse we s and t strings have different adresses
//     string s = get_string("s: ");
//     string t = get_string("t: ");
//     if (s == t)
//     {
//         printf("Same.\n");
//     }
//     else
//     {
//         printf("Different.\n");
//      }
// }

int main(void)
{
    // to compere we can use strcmp from string.h
    string s = get_string("s: ");
    string t = get_string("t: ");
    if (strcmp(s, t) == 0)
    {
        printf("Same.\n");
    }
    else
    {
        printf("Different.\n");
     }
}

// we can ecompare all typical data types int bool etc but for string we need to use strcmp
