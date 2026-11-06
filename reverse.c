#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(){
    string name = get_string("What is your name? ");
    for (int i = strlen(name)-1; i >= 0; i--){
        printf("%c", name[i]);
    }
}