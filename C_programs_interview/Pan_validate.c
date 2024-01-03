 #include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPan(char pan[]) {
    // Check length
    if (strlen(pan) != 10)
        return 0;

    // Check first five characters (alphabets)
    for (int i = 0; i < 5; i++) {
        if (!isalpha(pan[i]))
            return 0;
    }

    // Check next four characters (digits)
    for (int i = 5; i < 9; i++) {
        if (!isdigit(pan[i]))
            return 0;
    }

    // Check last character (alphabet)
    if (!isalpha(pan[9]))
        return 0;

    // If all conditions passed, PAN is valid
    return 1;
}

int main() {
    char pan[11];

    // Input PAN from the user
    printf("Enter PAN: ");
    scanf("%s", pan);

    // Validate PAN
    if (isValidPan(pan))
        printf("Valid PAN\n");
    else
        printf("Invalid PAN\n");

    return 0;
}
