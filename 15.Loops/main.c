#include <stdio.h>
#include <stdlib.h>


//LOOPS

int main()
{
    int sum=0,i,j,lum=1,k,fum=0;

    for(i=1;i<=6;i++)//For loop
    {
        sum = sum + i;
        printf("Sum is %d\n",sum);
    }
//While loop
    j=1;
    while(j<=6)
    {
        lum = lum * j;
        printf("Lum is %d\n",lum);
        j++;
    }
//Do while loop
    k=1;
    do
    {
        fum = fum + k;
        printf("fum is %d\n",fum);
        k++;//remove it to make an infinite loop
    }
    while(k<=6);

    return 0;
}

