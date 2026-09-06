#include <stdio.h>

int x =  -5;
float y = 7.99;
char z = 'G';
const float pi = 3.143;
int main(){
    printf("This is an example of Interger %d\n", x);
    printf("This is an example of Float %.3f\n", y);
    printf("This is an example of Character %c\n", z);

    //Using a lot of conversion specifiers
    printf("This is x, y and z respectively %d, %.2f, %c\n", x, y, z);

    //Using Constant
    printf("Pi is a universal constant number: %.3f\n", pi);

    //Using scanf()
    int iFirstNumber = 0;
    int iSecondNumber = 0;

    printf("Enter First Number:\n");
    scanf("%d", &iFirstNumber);

    printf("Enter Second Number:\n");
    scanf("%d", &iSecondNumber);

    printf("Sum = %d", iFirstNumber + iSecondNumber);
}