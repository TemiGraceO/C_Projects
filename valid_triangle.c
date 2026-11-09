#include <stdio.h>
#include "cs50.h"

float valid_triangle(float a, float b, float c)
{
    return a*b*c;
}

int main(void)
{
    float side_a =  get_float("Enter the length of the first side: ");
    float side_b =  get_float("Enter the length of the second side: ");
    float side_c =  get_float("Enter the length of the third side: ");

    if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a && side_a > 0 && side_b > 0 && side_c > 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}