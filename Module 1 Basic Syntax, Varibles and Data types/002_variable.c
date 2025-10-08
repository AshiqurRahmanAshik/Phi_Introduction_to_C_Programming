#include <stdio.h>

int main() {
    /*
    *Method 01 (Declare the variable name then assign a value in the variable)
    int num1;
    num1 = 10;

    *Method 02 (Declare and assign the value together)
    int num1 =10;
    */
    int num1 =100;
    float num2 =3.1416;
    char ch ='a';
    /* for print a variable value, we need format specifier
    int => %d
    float => %f
    char => %c
    */     
    printf ("%d\n", num1);
    printf ("%f\n", num2); // float will automatically print 6 digit after point. To control this behavior we need to use following way.
    printf ("%.2f\n", num2); // It will print 2 digit after the point
    printf ("%c\n",ch);
    return 0;

}