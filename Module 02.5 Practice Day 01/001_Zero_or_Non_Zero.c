/*
In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.
*/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non Zero");
    }
    return 0;
}