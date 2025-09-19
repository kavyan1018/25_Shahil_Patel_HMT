// #include<stdio.h>

// void main()
// {        //row,column
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};


//     printf("%d\n", arr[0][0]);
//     printf("%d\n", arr[0][1]);
//     printf("%d\n", arr[0][2]);
//     printf("%d\n", arr[1][0]);
//     printf("%d\n", arr[1][1]);
//     printf("%d\n", arr[1][2]);
//     printf("%d\n", arr[2][0]);
//     printf("%d\n", arr[2][1]);
//     printf("%d\n", arr[2][2]);


// }


#include<stdio.h>

void main()
{        //row,column
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++) //row 0, 1
    {
        for(int j = 0; j < 3; j++) //column 0, 1, 2
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}