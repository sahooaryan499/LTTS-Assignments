/* Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator*/

#include<stdio.h>
int conditionals(int ,int);
int conditionals(int x,int y){
    if(x>y){
        printf("%d is  greater(using conditionals)\n",x);
    }
    else{
        printf("%d is greater(using conditionals)\n",y);
    }
    x>y?printf("%d  is greater(using ternary)\n",x):printf("%d is  greater(using ternary)\n",y);
}

int main(){
    int a=10 ,b=20, res1;
    res1=conditionals(a,b);
}
