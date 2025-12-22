#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
