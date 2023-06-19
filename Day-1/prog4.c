/*Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2*/

#include <stdio.h>
#include <string.h>
int main()
{
    float opd1, opd2, res;
    char oper[5];

    printf("Enter operator 1:");
    scanf("%f", &opd1);

    printf("Enter operand ==> +,-,*,/:");
    // scanf("%s",oper);
    gets(oper);
    printf("Enter operator 2:");
    scanf("%f", &opd2);

    if (strcmp(oper, "+") == 0)
    {
        printf("%f", opd1 + opd2);
    }
    else if (strcmp(oper, "-") == 0)
    {
        printf("%f", opd1 - opd2);
    }
    else if (strcmp(oper, "*") == 0)
    {
        printf("%f", opd1 * opd2);
    }
    else if (strcmp(oper, "/") == 0)
    {
        if (opd2 != 0)
        {
            printf("%f", opd1 / opd2);
        }
        else
        {
            printf("Division by zero error!!");
        }
    }
    else
    {
        printf("Wrong input given!!!");
    }
    return 0;
}
