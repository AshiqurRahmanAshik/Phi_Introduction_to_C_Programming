/*
*Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  
*/
#include <stdio.h>

int main() {
    int num1; 
    float num2;
    scanf("%d %f", &num1, &num2);
    printf("%.2f %d", num2, num1);
    return 0;
}