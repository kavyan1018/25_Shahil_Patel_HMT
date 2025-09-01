#include<stdio.h>

void main()
{
    char ch;

    printf("Enter the any alphabet , number or special character :");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("\n  This is the Alphabet !");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\n This is the Number !");
    }
    else {
        printf("\n This is the Special Charater !");
    }
    
    

}