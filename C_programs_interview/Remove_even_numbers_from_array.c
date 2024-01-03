#include <stdio.h>

int main() {
    int size;

    printf("Input\n");
    scanf("%d", &size);

    int arr[size];

    // Reading array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Removing even elements
    int newSize = 0; // New size of the array after removing even elements

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("\nResult\n");

    // Printing the modified array without even elements
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
