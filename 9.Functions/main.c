#include <stdio.h>
#include <stdlib.h>

int main()/*Uses of functions ,call by function , syntax is interesting and gives a verity of applications*//*Important*/
{
    printf("Top\n");
  sayHi("Aniket", 19, 2000);
   sayHi("Aishwarya", 24, 1996);
    sayHi("Apurwa",26, 1994);
  printf("Bottom\n");
    return 0;
}

void sayHi (char name[], int age, int DOB)
{
    printf("Hi %s , you are %d , you date of birth is %d\n",name, age, DOB);
}
