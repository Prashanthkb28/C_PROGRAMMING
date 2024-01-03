#include <stdio.h>

int findSmallestMissingPositive(int arr[], int size) {
    int i, j;
    for (i = 1; i <= size; i++) {
        int found = 0;
        for (j = 0; j < size; j++) {
            if (arr[j] == i) {
                found = 1;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
    return size + 1;
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallestMissing = findSmallestMissingPositive(arr, size);
    printf("The smallest missing positive number is: %d\n", smallestMissing);
    return 0;
}
