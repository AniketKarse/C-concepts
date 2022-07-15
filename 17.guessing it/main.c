#include <stdio.h>
#include <stdlib.h>

int main()
{
   int secretnumber = 3;
   int guess;
   int guesscount = 0;
   int guesslimit = 3;
   int outofguess = 0;

   while(guess != secretnumber && outofguess == 0)
   {
       if(guesscount < guesslimit)
       {
        printf("Guess the number ");
       scanf("%d",&guess);
       guesscount++;
       } else {
        outofguess = 1;
       }
    }
   if(outofguess == 1){
   printf("Out of guesses!");
   }
   else{
       printf("You guessed IT !");
   }



    return 0;
}

