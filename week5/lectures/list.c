#include <stdio.h>
#include <stdlib.h>


//  firt verion with using malloc twice
// int main(void)
// {
//     int *list = malloc(3 * sizeof(int));
//     if (list == NULL)
//     {
//         return 1;
//     }


//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;


//     //.................

//     int *temp = malloc(4 * sizeof(int));
//     if (temp == NULL)
//     {
//         free(list);
//         return 1;
//     }

//     for(int i = 0; i < 3; i++)
//     {
//         temp[i] = list[i];
//     }
//     temp[3] = 4;

//     free(list);

//     list = temp;

//     for (int i = 0; i < 4; i++)
//     {
//        printf("%i\n", list[i]);
//     }

//     free(list);
//     return 0;

// }



// int this caese wee use relloc to make array with next locationa
int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }


    list[0] = 1;
    list[1] = 2;
    list[2] = 3;


    //.................

    //  realloc(orginal array, size new array ) - as example below

    int *temp = realloc(list, 4 * sizeof(int));
    if (temp == NULL)
    {
        free(list);
        return 1;
    }

    // we do not need to use for loop to copy list to temp

    list = temp;
    temp[3] = 4;

    for (int i = 0; i < 4; i++)
    {
       printf("%i\n", list[i]);
    }

    free(list);
    return 0;

}
