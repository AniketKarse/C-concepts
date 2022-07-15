#include <stdio.h>
#include <stdlib.h>


/*basic structures and its applications*///Important

struct Student
{
     char name[50], major[50];
     int age;
     double gpa;

};
int user(char name[50],char major[50],int age,double gpa)
{
printf("Hi %s ,major is %s, you are %d , you date of birth is %f\n",name, major, age, gpa);


 /*   printf("Enter Student's name");//What is the use of this???
    scanf("%s",name);
    printf("Enter Student's Major");
    scanf("%s",major);
    printf("Enter Student's age");
    scanf("%d",age);
    printf("Enter Student's gpa");
    scanf("%lf",gpa);
    */
}

int main()
{
    struct Student a;
    a.age = 19;
    a.gpa = 4.8;
    strcpy(a.name, "Khan");
    strcpy(a.major, "Philosophy");

    struct Student b;
    b.age = 21;
    b.gpa = 5.0;
    strcpy(b.name, "Ram");
    strcpy(b.major, "Religion");

    printf("%f\n", a.gpa);
    printf("%s\n", a.name);
    printf("%f\n", b.gpa);
    printf("%s\n", b.name);
    printf("%s\n", a.major);
    printf("%s\n", b.major);

    user("Aniket","Zhand",19,7.4);


    return 0;
}

