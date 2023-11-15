#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



// // technical in case belowe we cannot make a copy of string. T have the same addres as S.
// //When we print a and t we can see that bove of this string have upper fistt characetr
// int main(void)
// {

//     string s = get_string("s: ");
//     string t = s;
//     t[0] = toupper(t[0]);

//     printf("s: %s\n", s);
//     printf("t: %s\n", t);
// }

// To make correct copy od the string we need to use for to iteration by characters to creat new variable


// int main(void)
// {
//     char *s = get_string("s: ");
//     // malloc is function from stdlibe which gove us a free space in memory nede to make copy. For now t have neew adress.
//     char *t = malloc(strlen(s) + 1);
//     // we use loop for to sign new memeory adrees for all character in memory book by malloc to copy t. we add +1 to
//     // strlen bocous the last cahr in string is always \0
//     for (int i = 0; i < strlen(s) + 1; i++)
//     {
//         t[i] = s[i];
//     }
//     if (strlen(t) > 0)
//     {
//         t[0] = toupper(t[0]);
//     }

//     printf("%s\n", s);
//     printf("%s\n", t);
// }




//  copy with function and more safe typ

int main(void)
{
    char *s = get_string("s: ");
    // when somithing with string go wrong for example for big string data as esay program retune value NULL
    // so as per if below we returen valu 1 as sth goes wrong
    if (s == NULL)
    {
        return 1;
    }
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    (
        return 1;
    )
    // for copy we cane use strcpy(x, y) x - new space y source vaue
    strcpy(t, s);
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    // we need to added free end the end of program when we use malloc function
    free(t);

    return 0;
}

