#include <stdio.h>
#include <string.h>

void deleteDuplicates(char passportNumbers[][10], int size) {
    int i, j, k;
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(passportNumbers[i], passportNumbers[j]) == 0) {
                for (k = j; k < size - 1; k++) {
                    strcpy(passportNumbers[k], passportNumbers[k + 1]);
                }
                size--;
                j--;
            }
        }
    }
}

int main() {
    char passportNumbers[][10] = {"1234", "5678", "1234", "9876", "5678", "4321"};
    int size = sizeof(passportNumbers) / sizeof(passportNumbers[0]);
    
    printf("Original Passport Numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", passportNumbers[i]);
    }
    
    deleteDuplicates(passportNumbers, size);
    
    printf("\n\nPassport Numbers after Deleting Duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", passportNumbers[i]);
    }
    
    return 0;
}
