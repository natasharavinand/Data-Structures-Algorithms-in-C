/* Simple C program to demonstrate pointers; pointer to an array; pointer to an array created dynamically in heap */
// Interesting Note: Pointer will always take the same amount of memory, no matter the type

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5] = {2,4,6,8,10};
    
    for (int i = 0; i < 5; i++) {
        printf("%d", A[i]);
    }

    int *p = A;

    for (int i = 0; i < 5; i++) {
        printf("%d", p[i]);
    }

    int *p_in_heap = (int * ) malloc(5 * sizeof(int));

    p_in_heap[0] = 10;
    p_in_heap[1] = 11;
    p_in_heap[2] = 12;
    p_in_heap[3] = 13;
    p_in_heap[4] = 14;

    for (int i = 0; i < 5; i++) {
        printf("%d", p_in_heap[i]);
    }

    free(p_in_heap);

    return 0;
}