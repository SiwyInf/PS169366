#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Wpisz dwie liczby zmiennoprzecinkowe\n");
    scanf("%f %f", &a,&b);
    float wynik = (a > b) ? a:b;
    printf("Wieksza liczba to: %2.f", wynik);
    return 0;
}
