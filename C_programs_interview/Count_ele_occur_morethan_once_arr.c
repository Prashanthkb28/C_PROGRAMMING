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

    // Counting elements that occur more than once
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;  // Break to avoid counting the same element multiple times
            }
        }
    }

    printf("\nResult\n");

    printf("Number of elements that occur more than once: %d\n", count);

    return 0;
}
