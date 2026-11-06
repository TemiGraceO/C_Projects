#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main() {
    string n = get_string("Enter word: ");
    for (int i = 0; i < strlen(n); i++){
        printf("%c\n", n[i]);
    }
    }