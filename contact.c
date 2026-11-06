#include <stdio.h>
#include "cs50.h"

int main() {
    string name = get_string("What is your name? ");
    int age = get_int("How old are you? ");
    string PhoneNumber = get_string("What is your phone number? ");
    printf("Hello, %s! You are %i years old.\n", name, age);
    printf("Your phone number is: %s\n", PhoneNumber);
    return 0;
}