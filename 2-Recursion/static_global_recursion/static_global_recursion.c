/* Demonstrates how static variables may change in recursive function */

#include <stdio.h>

int y = 0;

int static_fun(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return static_fun(n - 1) + x;
    }

    return 0;
}

int global_fun(int n) {
    if (n > 0) {
        y++;
        return global_fun(n - 1) + y;
    }

    return 0;
}

int main() {
    int r;

    r = static_fun(5);
    printf("%d\n", r);

    r = global_fun(5);
    printf("%d\n", r);

    return 0;
}
