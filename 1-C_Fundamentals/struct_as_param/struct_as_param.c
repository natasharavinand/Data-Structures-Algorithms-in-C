/* This program demonstrates the difference between calling a structure by address
and then by value within a function, as well as creating a new structure dynamically in the heap */

#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int breadth;
};

void lb_by_value(struct Rectangle r) {
    r.length = 20;
    printf("Length %d \nBreadth %d\n", r.length, r.breadth);
};

void lb_by_address(struct Rectangle *p) {
    p->length = 20;
    printf("Length %d \nBreadth %d\n", p->length, p->breadth);
};

struct Rectangle * fun() {
    struct Rectangle *p;
    p = (struct Rectangle * ) malloc(sizeof(struct Rectangle));
    
    p->length = 15;
    p->breadth = 7;
    
    return p;
}

int main()
{
    struct Rectangle r = {10, 5};
    
    lb_by_value(r);
    
    lb_by_address(&r);
    
    struct Rectangle *r_ptr = fun();
    
    printf("Length %d and Breadth %d\n", r_ptr->length, r_ptr->breadth);
    
    free(r_ptr);
    
    return 0;
}