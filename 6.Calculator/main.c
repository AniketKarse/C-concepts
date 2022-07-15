#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,e,f;

    printf("Enter firse no ");
    scanf("%lf",&a);
    printf("Enter Second no ");
    scanf("%lf",&b);
    c = a + b;
    d = a - b;
    e = a / b;
    f = a * b;
    printf("%f %f %f %f ",c,d,e,f);
    return 0;
}
