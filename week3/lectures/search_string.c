#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    //declarate array
    string  games[] = {"monopoly", "batttleship", "boot", "iron", "trimpbe", "top hat" };

    // assk user for game
    string s = get_string("Please add your gaem name: ");
    for (int i = 0; i <6; i++)
    {
        // we use strcmp to comper string values == 0 means perceft matching
        if (strcmp(games[i], s) == 0)
        {
            printf("Ok %s is found.\n", s);
            return 0; // good habits if we add return 0 when we find it code is done
        }

    }
    printf("We do not found %s in array.\n", s);
    return 1; // good habits if we return 1 for example with error or as in this expalme when we do not find game
}
