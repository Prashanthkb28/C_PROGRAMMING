#include <stdio.h>

void printEvenNumbersAndSum(int num) {
    if (num <= 0) {
        printf("Invalid input\n");
        return;
    }

    int count = 0, sum = 0;

    printf("The even numbers are: ");
    for (int i = 1; i <= num; i++) {
        int evenNumber = 2 * i;
        printf("%d ", evenNumber);
        sum += evenNumber;
        count++;
    }

    printf("\n");
    printf("The sum of %d even natural numbers: %d\n", count, sum);
}

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printEvenNumbersAndSum(num);

    return 0;
}
