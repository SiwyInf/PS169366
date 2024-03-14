#include <stdio.h>
#include <stdlib.h>

void swap(int* ptr1, int* ptr2){
    int pamiec = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = pamiec;
}

int main()
{
    int a = 5;
    int b = 9;
    printf("%d     %d\n",a,b);
    swap(&a,&b);
    printf("%d     %d\n",a,b);
    return 0;
}
