#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }

        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Result: %d\n", maxIndex - minIndex);

    return 0;
}
