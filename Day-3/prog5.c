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

int main() {
    int n;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    int num, smallest, largest;
    printf("Enter %d numbers: \n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        int currSmallest = smallest_digit(num);
        int currLargest = largest_digit(num);

        if (i == 0) {
            smallest = currSmallest;
            largest = currLargest;
        } else {
            if (currSmallest < smallest) {
                smallest = currSmallest;
            }
            if (currLargest > largest) {
                largest = currLargest;
            }
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);

    return 0;
}
