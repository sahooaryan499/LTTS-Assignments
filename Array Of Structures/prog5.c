/*struct Student{
        int rollno;
        char name[20];
        float marks;
};
Write a function to perform a search operation on the array of structures based on name of the student*/

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(struct Student stud[], int numstud, const char* name) {
    int found = 0;

    for (int i = 0; i < numstud; i++) {
        if (strcmp(stud[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", stud[i].rollno);
            printf("Name: %s\n", stud[i].name);
            printf("Marks: %.2f\n", stud[i].marks);
            printf("\n");
            found = 1;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int numstud;

    printf("Enter the number of stud: ");
    scanf("%d", &numstud);

    struct Student stud[numstud];

    for (int i = 0; i < numstud; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &stud[i].rollno);

        printf("Name: ");
        scanf("%s", stud[i].name);

        printf("Marks: ");
        scanf("%f", &stud[i].marks);

        printf("\n");
    }

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    searchStudentByName(stud, numstud, searchName);

    return 0;
}

