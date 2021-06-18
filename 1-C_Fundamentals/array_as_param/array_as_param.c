#include <stdio.h>

//Note: Arrays are always passed by address; int A[] is a pointer to A[0]
void print_array(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", A[i]);
    }
};

void change_nth_element(int *A, int n) {
    A[n] = 15; 
};

int main() {
    int A[] = {2, 4, 6, 8, 10};

    change_nth_element(A, 1);

    // we don't need to use &A because arrays are passed by address already
    print_array(A, 5);

    return 0;
}