#include <stdio.h>

int main()
{
    int amount;
    int n500 = 0, n200 = 0, n100 = 0, n50 = 0, n10 = 0, n5 = 0, n1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        n500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200)
    {
        n200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100)
    {
        n100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 10)
    {
        n10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5)
    {
        n5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 1)
    {
        n1 = amount;
        amount = 0;
    }

    printf("500 = %d\n", n500);
    printf("200 = %d\n", n200);
    printf("100 = %d\n", n100);
    printf("50  = %d\n", n50);
    printf("10  = %d\n", n10);
    printf("5   = %d\n", n5);
    printf("1   = %d\n", n1);

}
