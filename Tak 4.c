#include <stdio.h>

int main() {
    int num1 = 20, num2 = 35;
    int *ptr1, *ptr2;
    int sum;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;   // add values using dereferencing

    printf("Sum of num1 and num2: %d\n", sum);

    return 0;
}
