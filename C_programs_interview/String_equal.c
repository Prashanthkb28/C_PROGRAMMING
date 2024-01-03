#include <stdio.h>

int areEqual(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0; // Not equal
        }
        str1++;
        str2++;
    }

    // Check if both strings have the same length
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Using the custom function to compare strings
    if (areEqual(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
