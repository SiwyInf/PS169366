#include <stdio.h>
#include <stdlib.h>

double subPtrs(double* num1, double* num2){
    double roznica = *num1 - *num2;
    if(roznica <0){
        roznica *=-1;
    }
    return roznica;
}
int main()
{
    double a = 2.5;
    double b = 10.4;
    printf("%.2f\n", subPtrs(&a,&b));
    return 0;
}
