/*Write a program to demonstrate the swapping the fields of two structures using pointers*/
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swap(struct Point* p1, struct Point* p2) {
    struct Point temp;
    temp.x = p1->x;
    p1->x = p2->x;
    p2->x = temp.x;

    temp.y = p1->y;
    p1->y = p2->y;
    p2->y = temp.y;
}

int main() {
    struct Point pt1;
    struct Point pt2;

    printf("Enter the x and y coordinates for Point 1: ");
    scanf("%d %d", &pt1.x, &pt1.y);

    printf("Enter the x and y coordinates for Point 2: ");
    scanf("%d %d", &pt2.x, &pt2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: x = %d, y = %d\n", pt1.x, pt1.y);
    printf("Point 2: x = %d, y = %d\n", pt2.x, pt2.y);
    swap(&pt1, &pt2);
    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", pt1.x, pt1.y);
    printf("Point 2: x = %d, y = %d\n", pt2.x, pt2.y);

    return 0;
}

