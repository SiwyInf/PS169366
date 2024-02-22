#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    printf("Wpisz pierwsza liczbe zmiennoprzecinkowa!\n");
    scanf("%lf",&a);
    printf("Wpisz druga liczbe zmiennoprzecinkowa!\n");
    scanf("%lf",&b);
    double roznica = a-b;
    printf("Oto roznica liczb %lf\n ",roznica);
    return 0;
}
