/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/

#include<stdio.h>
#include<string.h>
int main(){
    int roll;
    char name[30];
    float phy,math,chem,total,per;
    printf("Enter Name:");
    gets(name);
    printf("Enter roll number:");
    scanf("%d",&roll);
    printf("Enter marks in physics, chemistry, and math respectively:");
    scanf("%f %f %f",&phy,&chem,&math);
    total=math+phy+chem;
    per=(total*100)/300;
    printf("Total marks scored:%f\n",total);
    printf("Total  percentage is:%f %%\n",per);
    printf("\n---------------Summary---------------\n");
    printf("Name  -  %s\n",name);
    printf("Roll No  -  %d\n",roll);
    printf("\n-----Marks-----\n");
    printf("Physics  -  %f\n",phy);
    printf("Chemistry  -  %f\n",chem);
    printf("Maths  -  %f\n\n",math);
    printf("Total Score  -  %f  ===>  %f %%\n",total,per);
}
