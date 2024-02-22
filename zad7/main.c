#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    printf("Wpisz liczbe zmiennoprzecinkowa\n");
    scanf("%lf",&a);
    printf("Tyle masz dolarow %.2lf\n", a);
    double b = a * 0.85;
    printf("Tyle masz euro %.2lf", b);
    return 0;
}
