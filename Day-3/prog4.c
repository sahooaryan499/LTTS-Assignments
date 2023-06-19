#include <stdio.h>

int removeDigit(int num, int pos) {
    int pow = 1;
    int result = 0;

    while (num > 0) {
        int digit = num % 10;

        if (pos != 0) {
            result += digit * pow;
            pow *= 10;
        }

        num /= 10;
        pos--;
    }

    return result;
}

int findLargestAfterDeletingDigit(int num) {
    int largest = 0;

    for (int i = 0; i < 4; i++) {
        int removedNum = removeDigit(num, i);
        if (removedNum > largest) {
            largest = removedNum;
        }
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestAfterDeletingDigit(num);
    printf("Largest number after deleting a single digit: %d\n", largest);

    return 0;
}
