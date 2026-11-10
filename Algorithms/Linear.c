#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n = get_int("Which number do you search for(Between 0 and 10)? ");

    for(int i = 0; i < 10; i++)
    {
        if(number[i] == n)
        {
            printf("Found %i at index %i\n", n, i);
            return 0;
        }
    }
    printf("Number not found\n");
    return 1;
}