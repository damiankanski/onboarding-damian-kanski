#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Pobiera slowo od uzytkownika
    string word = get_string("Give as your word: ");

    int word_lg = strlen(word);
    for(int i = 0; i < word_lg -1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}