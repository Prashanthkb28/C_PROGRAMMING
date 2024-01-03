 #include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;  // Break to avoid counting the same element multiple times
            }
        }
    }

    return count;
}

int main() {
    int size;

    printf("Input\n");
    scanf("%d", &size);

    int arr[size];

    // Reading array elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting duplicates
    int duplicates = countDuplicates(arr, size);

    printf("\nResult\n");
    printf("Total number of duplicate elements found in the array: %d\n", duplicates);

    return 0;
}
