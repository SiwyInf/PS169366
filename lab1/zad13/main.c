#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    printf(" Wpisz liczbe calkowita!\n");
    scanf("%lf",&a);
    double bzwgl = a >= 0 ? a : -a;
    printf("Wartosc bezwzgledna to %.2lf", bzwgl);
    return 0;
}
