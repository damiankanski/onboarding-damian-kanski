// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string repleace(string user_word);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }
    printf("%s\n", repleace(argv[1]));

}


string repleace(string user_word)
{
    int lenght = strlen(user_word);
    for (int i = 0; i < lenght; i++)
    {
        //switch letter to number
        switch(user_word[i])
        {
            case 'a':
                user_word[i] = 54;
                break;
            case 'e':
                user_word[i] = 51;
                break;
            case 'i':
                user_word[i] = 49;
                break;
            case 'o':
                user_word[i] = 48;
                break;
        }

    }
    return user_word;

}
