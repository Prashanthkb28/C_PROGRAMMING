/* count the vowels in a each word of a given sentences
ex: i/p: hi how are you doing
o/p.   : 11222
hi->1
how->1
are ->2
you->2
doing->2
*/
#include <stdio.h>
#include <string.h>

int countVowels(char word[]) {
    int count = 0;
    for (int i = 0; word[i] != '\0'; ++i) {
        char ch = word[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            ++count;
        }
    }
    return count;
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Output: ");
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%d ", countVowels(token));
        token = strtok(NULL, " ");
    }

    return 0;
}
