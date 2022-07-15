#include <stdio.h>
#include <stdlib.h>

/*If the main function is kept at the top then we have to declare the oother function at the top too just like a variable  *//*Important*/
double cube(double a)
{double result = a * a * a;
printf("YEAH its gets printed\n");
return result;//it breaks the function here
printf("But not this");

}
int main()
{
    printf("Answer : %f\n",cube(3.0));

    return 0;
}
