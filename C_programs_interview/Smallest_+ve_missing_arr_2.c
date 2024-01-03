#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findMissingPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        while (arr[i] > 0 && arr[i] <= size && arr[arr[i] - 1] != arr[i]) {
            // Swap arr[i] with arr[arr[i] - 1]
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    // Find the first index i such that arr[i] != i + 1
    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1; // Smallest missing positive number
        }
    }

    // If all elements are in order, return the next positive number
    return size + 1;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findMissingPositive(arr, size);

    printf("The smallest positive number missing is: %d\n", missingNumber);

    return 0;
}
