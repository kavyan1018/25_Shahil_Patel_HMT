#include<stdio.h>

void main()
{
    int age;
    char gender, qualification;

    printf("Enter Your Age : ");
    scanf("%d", &age);

    printf("Enter Your Gender (M/F): ");
    scanf(" %c", &gender); 

    printf("Enter Qualification (G = Graduate , P = Postgraduate): ");
    scanf(" %c", &qualification);

    if (gender == 'M' || gender == 'm' && age >= 21 && age <= 35 && qualification == 'G' || qualification == 'g')
    {
        printf("Eligible for Job.\n");
    }
    else if (gender == 'F' || gender == 'f' && age >= 18 && age <= 30 && 
             qualification == 'G' || qualification == 'g' || qualification == 'P' || qualification == 'p')
    {
        printf("Eligible for Job.\n");
    }
    else
    {
        printf("Not Eligible for Job.\n");
    }
}
