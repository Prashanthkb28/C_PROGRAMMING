#if 0
#include <stdio.h>

int main() {
    // Example 2D array
    int twoDArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Calculate the total number of elements in the 2D array
    int rows = 3;
    int cols = 3;
    int totalElements = rows * cols;

    // Create a 1D array with the same size as the 2D array
    int oneDArray[totalElements];

    // Copy elements from 2D array to 1D array
    int k = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            oneDArray[k++] = twoDArray[i][j];
        }
    }

    // Print the elements of the 1D array
    printf("1D Array: ");
    for (int i = 0; i < totalElements; ++i) {
        printf("%d ", oneDArray[i]);
    }

    return 0;
}
#endif
// using pointer
#if 1
#include <stdio.h>

int main() {
    // Example 2D array
    int twoDArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Calculate the total number of elements in the 2D array
    int rows = 3;
    int cols = 3;
    int totalElements = rows * cols;

    // Create a 1D array with the same size as the 2D array
    int oneDArray[totalElements];

    // Use pointer arithmetic to copy elements from 2D array to 1D array
    int *ptr2D = &twoDArray[0][0];
    int *ptr1D = oneDArray;

    for (int i = 0; i < totalElements; ++i) {
        *(ptr1D + i) = *(ptr2D + i);
    }

    // Print the elements of the 1D array
    printf("1D Array: ");
    for (int i = 0; i < totalElements; ++i) {
        printf("%d ", oneDArray[i]);
    }

    return 0;
}
#endif
