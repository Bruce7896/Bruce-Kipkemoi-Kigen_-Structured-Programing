#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int value, pos; // pos is 1-based in this program (as in the example)

    // Input size
    printf("Input the size of array: ");
    scanf("%d", &n);

    // Input elements
    printf("Input %d elements in the array in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Show current list before insertion
    printf("The current list of the array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Read value to insert
    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    // Read 1-based position
    printf("Input the Position, where the value to be inserted: ");
    scanf("%d", &pos);

    // Validate position (1 to n+1)
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position! Must be between 1 and %d.\n", n + 1);
        return 0;
    }

    // Convert to 0-based index
    int idx = pos - 1;

    // Shift elements to the right to make space
    for(i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[idx] = value;
    n++; // array now has one more element

    // Show new list after insertion
    printf("After Insert the element the new list is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
