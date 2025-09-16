/*
    *****
    *****
    *****
    *****
    *****
*/

#include<stdio.h>

void main()
{
    int i,j;

    char n;

    printf("Enter the char u want to print pattern : ");
    scanf("%c",&n);

    for (i = 0; i < 5; i++)
    {
        // nested loop
        for (j = 0; j < 5; j++)
        {
            printf("%c", n);
        }
        printf("\n");
    }
    

}