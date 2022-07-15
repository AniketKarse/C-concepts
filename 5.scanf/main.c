#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Use of scan f and limitation of it*//*Not that important*/
    double gpa;
    char name[20];
    printf("Enter your gpa  ");
    scanf("%lf",&gpa);
    printf("your gpa is %f\n",gpa);

    printf("Enter your name  ");//here scanf has an limitation , it stops after a space or any special char
    scanf("%s",name);//for example it can print Aniket , but not Aniket Karse
    printf("Your name is %s",name);
    return 0;
}
