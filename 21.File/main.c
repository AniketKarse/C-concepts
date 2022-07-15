#include <stdio.h>
#include <stdlib.h>

//pretty Awesome application of files with an example file created
int main()
{

   FILE * fpointer = fopen("new.txt","a");//there is a great difference between 'a' and 'w' type for file

   fprintf(fpointer,"\nAniket is just Awesome ");//Every time you change the text is continues it

   fclose(fpointer);

    return 0;
}
