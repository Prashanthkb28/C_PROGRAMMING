/* romve the trailing and leading spaces in a given string */
#include <stdio.h>
#include <string.h>

void removeLeadingTrailingSpaces(char *str) {
    int i, j;
    int len = strlen(str);

    // Remove leading spaces
    for (i = 0; str[i] == ' ' || str[i] == '\t'; i++);

    // Shift the string to the left
    if (i > 0) {
        for (j = 0; j < len - i; j++) {
            str[j] = str[j + i];
        }
        str[j] = '\0';
    }

    // Remove trailing spaces
    len = strlen(str);
    for (i = len - 1; str[i] == ' ' || str[i] == '\t'; i--);

    // Terminate the string at the last non-space character
    str[i + 1] = '\0';
}

int main() {
   /* char str[] = "   Hello, World!   ";*/
  char str[50];
  printf("Enter the string :");
  scanf("%[^\n]",str);
    printf("Before: \"%s\"\n", str);
    removeLeadingTrailingSpaces(str);
    printf("After: \"%s\"\n", str);
    return 0;
}
