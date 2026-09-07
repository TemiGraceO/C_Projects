#include <stdio.h>

int main(){
    int a = 5;
    int b = 1;
    int x = 10;
    int y = 5;
    int iLeft = a - b;
    int iRight = x - y;
    int iResult = iLeft * iRight;
    printf("%d\n", iResult);

    //prompting Users for input 
    int iFirstNumber = 0;
    int iSecondNumber = 0;
    int iThirdNumber = 0;
    int iFourthNumber = 0;
    int iFifthNumber = 0;
    printf("Enter First Number: ");
    scanf("%d", &iFirstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &iSecondNumber);
    printf("Enter Third Number: ");
    scanf("%d", &iThirdNumber);
    printf("Enter Fourth Number: ");
    scanf("%d", &iFourthNumber);
    iFifthNumber = (iFirstNumber - iSecondNumber) * (iThirdNumber - iFourthNumber);
    printf("%d\n", iFifthNumber);

    //Asking for name
    char chrName[50];
    printf("Please Enter Your Name: ");
    scanf("%s", chrName);
    printf("Good day, %s!\n", chrName);

    //Total Revenue
    float price;
    float Quantity;
    float Total_Revenue = price * Quantity;
    printf("Enter Price:\n");
    scanf("%f", price);
    printf("Enter Quantity:\n");
    scanf("%f", Quantity);
    printf("Total Revenue is: %f", Total_Revenue);
}