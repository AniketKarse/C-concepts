#include <stdio.h>
#include <stdlib.h>


int max(int a, int b ,int c)
{
    int result ;
    if(a >= b && a >= c){
    result = a;}
else if(b >= a && b>= c){
    result = b;}
   else{
    result = c;
}
    }
/*
if(a>b & a>c){
        result = a;
    }
    else{
            if(b>a & b>c){
                result = b;
            }
                else{
                    result = c;
                }
            }
*/




int main()
{
    printf("%d", max(4,4,4));

    return 0;
}
