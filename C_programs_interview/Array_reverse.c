 #include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
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

    // Reverse the array
    reverseArray(arr, size);

    printf("\nResult\n");

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
