/* Example of using structures as parameters to create modular programs */

#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

void initialize_rectangle(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
};

int get_area(struct Rectangle r) {
    return r.length * r.breadth;
};

int get_perimeter(struct Rectangle r) {
    return (r.length * 2)+ (2 * r.breadth);
};

int main() {
    int length;
    int breadth;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    struct Rectangle r;
    initialize_rectangle(&r, length, breadth);

    int rectangle_area = get_area(r);
    int rectangle_perimeter = get_perimeter(r);
    
    printf("Area: %d, Perimeter: %d\n", rectangle_area, rectangle_perimeter);

    return 0;
}