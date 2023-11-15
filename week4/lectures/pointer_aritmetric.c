#include <stdio.h>

// int main(void)
// {
//     //  * -- means go to :)
//     char *s = "Hi!";
//     printf("%c\n", *s);
//     printf("%c\n", *(s+1));
//     printf("%c\n", *(s+2));
// }


int main(void)
{
    //  print all from specyfict adrees to the end of string
    char *s = "Hi!";
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
}
