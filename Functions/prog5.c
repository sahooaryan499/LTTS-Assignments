/*Write a program to find both smallest and largest digits in given n numbers*/

#include <stdio.h>

int smallest_digit(int num) {
    int smallest = 9;

    while (num > 0) {
        int digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        num /= 10;
    }

    return smallest;
}

int largest_digit(int num) {
    int largest = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }

    return largest;
}

int count_digits(int num) {
    int count = 0;

    while (num > 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    int num;
    printf("Enter %d numbers: \n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (count_digits(num) == 1) {
            printf("Not Valid\n");
        } else {
            int currSmallest = smallest_digit(num);
            int currLargest = largest_digit(num);

            printf("Smallest digit: %d\n", currSmallest);
            printf("Largest digit: %d\n", currLargest);
        }
    }

    return 0;
}
