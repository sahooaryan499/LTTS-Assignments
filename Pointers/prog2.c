/*Write a program to swap any type of data passed to an function*/

#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swapping: x = %d, y = %d\n", x, y);

    double a, b;
    printf("Enter two doubles: ");
    scanf("%lf %lf", &a, &b);
    printf("Before swapping: a = %lf, b = %lf\n", a, b);
    swap(&a, &b, sizeof(double));
    printf("After swapping: a = %lf, b = %lf\n", a, b);

    char c1, c2;
    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
