/* C program to demostrate dynamically allocating a struct in the heal using a pointer */

#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    printf("%d\n", r.length);
    printf("%d\n", r.breadth);

    struct Rectangle *p = &r;
    printf("%d\n", p->length);
    printf("%d\n", p->breadth);

    // create struct in heap using dynamic allocation
    struct Rectangle *p_in_heap = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    p_in_heap->length = 15;
    p_in_heap->breadth = 25;

    printf("%d\n", p_in_heap->length);
    printf("%d\n", p_in_heap->breadth);

    free(p_in_heap);

    return 0;

}