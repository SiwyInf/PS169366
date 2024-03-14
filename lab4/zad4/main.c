#include <stdio.h>
#include <stdlib.h>

double findMax(double* num1, double* num2){
if(*num1 > *num2){
    return *num1;
}
else return *num2;
}

int main()
{
    double num1 = 11.1;
    double num2= 8.9;
    printf("%.2lf\n", findMax(&num1,&num2));
    return 0;
}
