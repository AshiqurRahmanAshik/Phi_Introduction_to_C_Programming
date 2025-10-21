#include <stdio.h>

int main()
{
    int myMoney, myRemainingMoney;
    scanf("%d", &myMoney);
    if (myMoney > 1000)
    {
        printf("I will buy Punjabi\n");
        myRemainingMoney = myMoney - 1000;
        if (myRemainingMoney >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}