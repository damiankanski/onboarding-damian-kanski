#include <cs50.h>
#include <stdio.h>


// int main(void)
// {
//     // type string is not orginal type from Cleng but it is delcarate in cs50.h
//     string s = "HI!";
//     printf("%s\n", s);
// }



// int main(void)
// {
//     // when we need to define the string in orginal C we need to use type: char *s
//     char *s = "Hi !";
//     printf("%s\n", s);
// }

// int main(void)
// {
//     // chec the adress of "Hi !"
//     char *s = "Hi !";
//     printf("%p\n", s);
//     printf("%p\n", &s[0]);
// }

int main(void)
{
    // chec the adress of "Hi !"
    char *s = "Hi!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}
