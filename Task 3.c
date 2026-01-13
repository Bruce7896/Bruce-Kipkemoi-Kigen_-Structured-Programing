#include <stdio.h>

int main() {
    int count = 39;
    int *pCount;

    pCount = &count;     // assign address of count

    *pCount = 25;        // modify value using pointer

    printf("Updated value of count: %d\n", count);

    return 0;
}
