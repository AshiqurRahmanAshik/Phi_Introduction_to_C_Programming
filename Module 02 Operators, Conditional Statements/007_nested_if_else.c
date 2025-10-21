#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk > 500)
    {
        printf("I will eat Burger\n");
        if (tk > 1000)
        {
            printf("I will eat Chocolate");
        }
        else
        {
            printf("I will not eat Chocolate");
        }
    }
    else
    {
        printf("I will not eat anything");
    }
    return 0;
}

/*
Conditions within condition is called nested if else.
*/