#include <stdio.h>
#define BUFFER_SIZE 5

int main() {
    int arr[BUFFER_SIZE];
    int i, value;

    // Input initial values
    printf("Input %d elements in the array:\n", BUFFER_SIZE);
    for(i = 0; i < BUFFER_SIZE; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Show current list
    printf("The current list of the array: ");
    for(i = 0; i < BUFFER_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input new value
    printf("Input the new value to replace the first element: ");
    scanf("%d", &value);

    // Replace first element
    arr[0] = value;

    // Show new list
    printf("After inserting the new value, the list is: ");
    for(i = 0; i < BUFFER_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
