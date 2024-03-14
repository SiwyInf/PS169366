#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
 return a + b;
}
int sumVals(int* a, int* b){
return *a + *b;
}
void addPtr(int* a, int* b, int* c){
*c = *a + *b;
}

int main()
{
    int sV1 = 3;
    int sV2 = 5;
    printf("%d\n", sum(2,2));
    int wynik = sumVals(&sV1,&sV2);
    printf("%d\n", wynik);
    int a1 = 3;
    int b1 = 2;
    int c1;
    addPtr(&a1,&b1,&c1);
    printf("%d", c1);
    return 0;
}
