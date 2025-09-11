#include<stdio.h>

void main()
{
    int n1,  n2, max;

    printf("Enter the First Numbner :");
    scanf("%d", &n1);
    
    printf("Enter the Second Numbner :");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    
    
    while (1) // ans 0 
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("LCM %d and %d is : %d", n1, n2, max);
            break;
        }
        max++;
    }
    

}