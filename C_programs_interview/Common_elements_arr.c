#include <stdio.h>
#include <stdlib.h>

void findCommonElements(int *arr1, int size1, int *arr2, int size2) {
    printf("\nResult\n");

    int found = 0;  // Flag to check if common elements are found

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (*(arr1 + i) == *(arr2 + j)) {
                printf("%d ", *(arr1 + i));
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No common elements found");
    }

    printf("\n");
}

int main() {
    int size1, size2;

    printf("Test\n");

    printf("Input\n");
    scanf("%d %d", &size1, &size2);

    int *arr1 = (int *)malloc(size1 * sizeof(int));
    int *arr2 = (int *)malloc(size2 * sizeof(int));

    // Reading array elements
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    findCommonElements(arr1, size1, arr2, size2);

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);

    return 0;
}
