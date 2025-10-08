/*
Take a number from user and check if its a positive or negative number.
*/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive number", a);
    }
    else if (a < 0)
    {
        printf("%d is a negative number", a);
    }
    else
    {
        printf("%d is 0", a);
    }
    return 0;
}