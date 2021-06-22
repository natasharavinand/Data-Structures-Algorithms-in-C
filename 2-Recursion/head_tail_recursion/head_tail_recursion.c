/* Simple examples of head/tail recursion */

#include <stdio.h>

void head_recursion(int n) {
    if (n > 0) {
        head_recursion(n - 1);
        printf("%d ", n);
    }
}
void tail_recursion(int n) {
    if (n > 0) {
        printf("%d ", n);
        tail_recursion(n - 1);
    }
}

int main() {
    int x = 3;
    head_recursion(x); // 1 2 3
    tail_recursion(x); // 3 2 1
    return 0;
}