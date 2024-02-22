#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    printf("Wpisz liczbe zmiennoprzecinkowa\n");
    scanf("%lf",&a);
    double potega = a * 2;
    printf("Potega to: %.2lf", potega);
    return 0;
}
