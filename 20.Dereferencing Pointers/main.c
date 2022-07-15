#include <stdio.h>
#include <stdlib.h>

/*Application of dereference the pointer and its quite interesting to play with*///important

int main()
{
int num = 03;
int *pNum = &num;
float a = 3.3;
float *pA = &a;


printf("num's memory adress is : %p\nand same is : %p\n", &num ,pNum);//only adress
printf("a's memory adress is : %p\nand same is : %f", &a ,*pA);//adress and the value stored in it
/*
printf("%d",*&*&num);// Application of dereference the pointer
*/
    return 0;
}

