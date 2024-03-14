#include <stdio.h>
#include <stdlib.h>

void swapSign(double* ptr1, double* ptr2){
    int pamiec = *ptr1;
    if(*ptr1 < 0 && *ptr2>0 || *ptr1 >0 && *ptr2 < 0){
        *ptr1 = *ptr2;
        *ptr2 = pamiec;
    }
    else return 0;
}

int main()
{
    double a = -5.0;
    double b = 9.0;
    printf("%.2f    %.2f\n",a,b);
    swapSign(&a,&b);
    printf("%.2f    %.2f\n",a,b);
    return 0;
}
