#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node
{
    string phrase;
    struct node *next;
}
node;

#define LIST_SIZE 2

void unload(node *list);
void visualize(node *list);

int main(void)
{
    node *list = NULL;

    //Add items to list
    for (int i = 0; i - LIST_SIZE; i++)
    {
        string phrase = get_string("Enter word: ");

        //todo
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            printf("Error");
            return 1;
        }
        n->phrase = phrase;
        n->next = NULL;

        list = n;

        //vs list after adding
        visualize(list);
    }

    unload(list);
}


void unload(node *list)
{
    while (list != NULL)
    {
        node *ptr = list->next;
        free(list);
        list = ptr;
    }

}

void visualize(node *list)
{
    printf("\n++-- List Visualizer --+\n\n");
    while (list != NULL)
    {
        printf("Location %p\n", list);
        printf("Phrase: %s\n", list->phrase);
        printf("Next: %p\n\n", list ->next);
        list = list->next;
    }
    printf("+-----------------------------------+\n");
}
