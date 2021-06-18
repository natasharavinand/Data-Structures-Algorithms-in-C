/* Illustrates basics of arrays in C */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = i;
        printf("%d\n", A[i]);
    }
    
    return 0;

}