#include <stdio.h>

int main()
{

    int i, no,rem, rev = 0;

    printf("Enter no to reverse:");
    scanf("%d", &no);

    for( ; no > 0 ; )
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    
    printf("Rev Num : %d", rev);

}