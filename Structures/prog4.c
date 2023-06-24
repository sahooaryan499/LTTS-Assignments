/*write a program to Store Data for n students in Structures Dynamically*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student* students = (Student*)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
