/*Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);*/

#include<stdio.h>
int bit_operations(int ,int);

int bit_operations(int num,int oper_type)
{
    int res;
    if(oper_type==1){
        res = num |= 1;
        return res;
    }
     else if(oper_type==2){
         res = num |~ (1 << 31);
    }
    else if (oper_type ==3)
    {
        res = num ^ (1 << 15);
    }
    else{
        printf("Invalid operation type!\n");
    }
    
}

int main(){
    int result;
    int num,oper,res;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter operation type:");
    scanf("%d",&oper);
    result=bit_operations(num,oper);
    printf("The result is:%d\n",result);
}