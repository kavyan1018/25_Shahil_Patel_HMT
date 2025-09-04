#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    int sum, choice;

    printf("\n 1.. Addition");
    printf("\n 2.. Subtraction");
    printf("\n 3.. Multiplication");
    printf("\n 4.. Division");
    printf("\n Enter your choice :");
    scanf("%d", &choice);

    printf("Enter the First Number :");
    scanf("%d", &a);

    printf("Enter the Second Number :");
    scanf("%d", &b);

    switch (choice)
    {
    case 1:
        sum = a + b;
        printf("\n%d + %d Sum is : %d", a, b, sum);
        break;

    case 2:
        sum = a - b;
        printf("\n%d - %d Sum is : %d", a, b, sum);
        break;
        
    case 3:
        sum = a * b;
        printf("\n%d * %d Sum is : %d", a, b, sum);
        break;

    case 4:
        sum = a / b;
        printf("\n%d / %d Sum is : %d", a, b, sum);
        break;

    default:
        printf("\nInvalid Choice !");
        break;
    }
}