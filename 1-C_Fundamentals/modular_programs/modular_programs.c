/* Example of a modular program */

#include <stdio.h>

int get_area(int length, int breadth) {
    return length * breadth;
};

int get_perimeter(int length, int breadth) {
    return (length * 2)+ (2 * breadth);
};

int main() {
    int length = 0;
    int breadth = 0;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    int area = get_area(length, breadth);
    int perimeter = get_perimeter(length, breadth);

    printf("Area: %d, Perimeter: %d\n", area, perimeter);

    return 0;
}