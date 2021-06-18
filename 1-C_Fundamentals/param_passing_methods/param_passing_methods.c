/* C program to demonstrate passing parameters by address */

#include <stdio.h>

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    return 0;
};

int main() {
    int num1 = 10;
    int num2 = 15;

    swap(&num1, &num2);

    return 0;
}