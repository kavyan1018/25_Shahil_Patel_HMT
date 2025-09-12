#include <stdio.h>

int main() {

    int n, f = 0, s = 1, tem, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", f);
        tem = f + s; // calculate next term
        f = s;        // move to next
        s = tem;
    }

    return 0;
}
