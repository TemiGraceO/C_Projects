#include <stdio.h>
#include "cs50.h"

int main(){
    int i = get_int("Enter a number to signify height: ");
    for (int j = 1; j <= i; j++){
        for(int k = 1; k <= j; k++){
            printf("#");
        }
        printf("\n");
    }
}