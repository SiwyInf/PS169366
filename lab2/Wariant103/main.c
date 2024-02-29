#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Wpisz 3 liczby zmiennoprzecinkowe!\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    double wynik = (a * b) + (2 *c) / (3-b);
    printf("Wynik to: %2lf", wynik);
    return 0;
}
