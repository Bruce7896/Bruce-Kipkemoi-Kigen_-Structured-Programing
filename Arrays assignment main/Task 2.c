#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    // Input size
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Find unique elements
    printf("The unique elements found in the array are: ");
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j] && i != j) {
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
