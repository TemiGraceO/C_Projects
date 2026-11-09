#include <stdio.h>
#include "cs50.h"
float mult(float a, float b)
{
    return a * b;
}
int main(void)
{
    float x = get_float("Enter a number: ");
    float y = get_float("Enter another number: ");
    float z = mult(x, y);
    printf("The product of %.2f and %.2f is %.2f\n", x, y, z);
    return 0;
}