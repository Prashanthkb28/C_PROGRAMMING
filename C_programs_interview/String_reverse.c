#include <stdio.h>

void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    
    // Finding the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Adjusting for the null terminator

    // Swapping characters from both ends until they meet
    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    char inputString[] = "Hello, World!";
    
    // Print original string
    printf("Original String: %s\n", inputString);
    
    // Reverse the string
    reverseString(inputString);
    
    // Print reversed string
    printf("Reversed String: %s\n", inputString);

    return 0;
}
