#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    // get name
    string word = get_string("Word: ");

    bool alphabetical = true;
    int lenght = strlen(word);

    for (int i = 1; i < lenght - 1; i ++)
    {
        // if char is not alhabeltical then previosue char i word
        if (word[i] < word[i -1 ])
        {
            alphabetical = false;
        }
    }

    if (alphabetical)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
