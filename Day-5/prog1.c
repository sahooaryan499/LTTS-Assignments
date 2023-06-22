#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInput(struct Student* studentArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &studentArray[i].rollno);

        printf("Name: ");
        scanf("%s", studentArray[i].name);

        printf("Marks: ");
        scanf("%f", &studentArray[i].marks);

        printf("\n");
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    parseInput(students, numStudents);

    // Print the initialized structures
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
