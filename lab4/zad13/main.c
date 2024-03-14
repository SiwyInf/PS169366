#include <stdio.h>
#include <stdlib.h>

int minPtr(int* num1, int* num2, int* num3){
int min = *num1;
if(*num2 < min){
    min = *num2;
}
if(*num3 <min){
    min = *num3;
}
return min;
}

int main()
{
    int a = 7;
    int b = 2;
    int c =10;
    printf("%d\n", minPtr(&a,&b,&c));
    return 0;
}
