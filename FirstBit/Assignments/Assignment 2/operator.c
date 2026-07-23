#include <stdio.h>

void main()
{
    int no1, no2, res;
    char op;

    printf("Enter Two Numbers:");
    scanf("%d%d", &no1, &no2);

    printf("Enter Operator :");
    scanf(" %c", &op);

    if(op == '+')
    {
        res = no1 + no2;
        printf("Addition is %d", res);
    }
    else
    {
        if(op == '-')
        {
            res = no1 - no2;
            printf("Substraction is %d", res);
        }
        else
        {
            if(op == '*')
            {
                res = no1 * no2;
                printf("Multiplication is %d", res);
            }
            else
            {
                if(op == '/')
                {
                    res = no1 / no2;
                    printf("Division is %d", res);
                }
                else
                {
                    printf("Invalid Operator...");
                }
            }
        }
    }
}