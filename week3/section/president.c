#include <cs50.h>
#include <stdio.h>
#include <string.h>


//declarate candidate struct
typedef struct
{
    string name;
    int votes;
}
candidate;

//delcarate function
candidate get_candidate(string prompt);


//main
int main(void)
{
    //base on cnadidate struct create array name president_array for 3 candidates
    candidate president_array[3];
    //loop needed to 3 cadidates
    for (int i = 0; i < 3; i++)
    {
        president_array[i] = get_candidate("Enter your candidate: ");
    }

    printf("Candidates:\n");
    // loop to print all candidates
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s, Votes: %d\n", president_array[i].name, president_array[i].votes);
    }

}

// creat a candidate base on user data
candidate get_candidate(string prompt)
{
    printf("%s\n", prompt);

    candidate c;
    c.name = get_string("Enter name: ");
    c.votes = get_int("Enter a nuber of votes: ");
    return c;

}

