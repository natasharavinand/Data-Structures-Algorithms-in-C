/* Illustrates basics of structures in C */

#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r1 = {10, 5};

    printf("Length %d\n Breadth %d\n", r1.length, r1.breadth);

    r1.length = 15;
    r1.breadth = 20;

    printf("Length %d\n Breadth %d\n", r1.length, r1.breadth);

    return 0;
}