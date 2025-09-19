// #include<stdio.h>

// void main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     int i;

//     for(i = 0; i < 5; i++)
//     {
//         printf("Element at index %d: %d\n", i, a[i]);
//     }
// }


// #include<stdio.h>

// void main()
// {
//     int a[] = {10, 20, 30, 40, 50, 60};
//     int i;

//     for(i = 0; i < 6; i++)
//     {
//         printf("Element at index %d: %d\n",i, a[i]);
//     }
// }



// user input

#include<stdio.h>

void main()
{
    int a[6];
    int i;

    for(i = 0; i < 6; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 6; i++)
    {
        printf("Element at index %d: %d\n", i, a[i]);
    }
}
