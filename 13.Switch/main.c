#include <stdio.h>
#include <stdlib.h>


int main()
{
   char grade;
   printf("Enter your Grade ");
   scanf(" %c",&grade);

   switch(grade)
   {
   case 'A' :
    printf("You did Great!");
    break;
   case 'B' :
    printf("Alright!");
    break;
   case 'C' :
    printf("poorly");
    break;
   case 'D' :
    printf("Bad");
    break;
   case 'F' :
    printf("You failed");
    break;
   default :
    printf("Invalid Grade");



   }
    return 0;
}

