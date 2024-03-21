#include <stdio.h>
#include <stdlib.h>

void foo(int* a, int* b){
if(*a>0){
    *b = *a * *b;
}
}

int main()
{
    int a =5;
    int b =3;
    printf("Przed wywolaniem funkcji\n%d\n%d\n",a,b);
    foo(&a,&b);
    printf("\nPo wywolaniu\n%d\n%d",a,b);
    return 0;
}
