#include <stdio.h>

int main()
{
    int age;
    char gender, qualification;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter qualification (G/P): ");
    scanf(" %c", &qualification);

    if (gender == 'M' || gender == 'm')
    {
        if (age >= 21 && age <= 35 && qualification == 'G' || qualification == 'g')
        {
            printf("Eligible!");
        }
        else
        {
            printf("Not Eligible!");
        }
    }
    else if (gender == 'F' || gender == 'f')
    {
        if (age >= 18 && age <= 35 && qualification == 'G' || qualification == 'g' || qualification == 'P' || qualification == 'p')
        {
            printf("Eligible!");
        }
        else
        {
            printf("Not Eligible!");
        }
    }
    else
    {
        printf("Invalid input!");
    }

    return 0;
}
