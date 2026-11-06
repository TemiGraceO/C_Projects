#include <stdio.h>
#include "cs50.h"

int main(){
    int age = get_int("What is your age? ");
    if (age < 18){
        printf("You're a minor.\n");
    }
    else if (age >= 18 && age < 65){
        printf("You're an adult.\n");
    }
    else{
        printf("You're a senior citizen.\n");
    }
}