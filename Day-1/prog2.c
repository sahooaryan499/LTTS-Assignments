/*Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"*/

#include<stdio.h>
int main(){
    int mark=0;
    printf("Enter mark of student:");
    scanf("%d",&mark);
    if(mark>=90 &&  mark<=100)
        printf("Grade A");
    else if (mark>=75  && mark<90)
    {
        printf("Grade B");
    }
    else if (mark>=60 && mark<75)
    {
        printf("Grade C");
    }
    else if (mark>50 && mark<60)
    {
        printf("Grade D");
    }
    else if (mark>=0 && mark<50)
    {
        printf("Grade F");
    }
    else
        printf("Wrong Input!!");
}
    
    
    
    
