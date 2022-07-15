#include <stdio.h>
#include <stdlib.h>


int main()
{
    double a,b;
    char op;

    printf("Enter a number : ");
    scanf("%lf",&a);
    printf("Enter a operator : ");
    scanf(" %c", &op);
    printf("Enter a number : ");
    scanf("%lf", &b);

    if(op == '+')
    {
        printf("%f", a + b);
    }else if(op =='-')
    {
         printf("%f", a - b);
    }
    else if(op =='/')
    {
         printf("%f", a / b);
    }
    else if(op =='*')
    {
         printf("%f", a * b);
    }
    else
    {
        printf("Invalid Operator");
    }



    return 0;
}

