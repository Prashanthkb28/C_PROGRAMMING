#include <stdio.h>

void strupper(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    char example[] = "Hello World!";
    strupper(example);
    printf("%s\n", example);
    return 0;
}
