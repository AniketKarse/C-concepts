#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*use of printf function , value in numbers can be used anytime once after it has been decleared,
    but characters have to be declared every time*/

    printf("%d\n",33);//only numbers
    printf("%d\n");//prints the previous given value
    printf("%f\n",3.3);
    printf("%f\n");//works same as decimal

    printf("%d\n",33);//decimal to float
    printf("%f\n");

    printf("%d\n",33.0);//float saved as decimal gives 0 here
    printf("%f\n");//and 33.0 here

    printf("%f\n",33.0);//float to decimal
    printf("%d\n");



    printf("%c\n",'a');//relaton between number and characters
    printf("%d\n");//ASCII of a
    printf("%f\n");//last saved value in float
    printf("%c\n",'A');
    printf("%f\n");//last saved value in float
    printf("%d\n");//ASCII of A

    printf("Hello\" world!\n");//only characters
    printf("%s\n","Hello there");
    printf("%c\n",'f');
    printf("%s\n");//does not print the previous value given
    printf("%c\n");



    return 0;
}
