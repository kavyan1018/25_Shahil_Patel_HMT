#include<stdio.h>

void main()
{
    // prime number starting from user to user end

    int start, end, i, j, temp;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);


    if (start < 2)
    {
        start = 2;
    }


    i = start;
    while (i <= end)
    {
        temp = 1; // assume i is prime

        j = 2;
        while (j * j <= i)
        {
            if (i % j == 0)
            {
                temp = 0; // i is not prime
                break;
            }   
            j++;         
        }

        if (temp == 1)
        {
            printf("%d ", i);
        }
        
        i++;
    }
}