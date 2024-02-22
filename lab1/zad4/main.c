#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("wpisz liczbe pierwsza!\n");
    scanf("%d", &a);
    printf("wpisz liczbe druga!\n");
    scanf("%d", &b);
    printf("wpisz liczbe trzecia!\n");
    scanf("%d", &c);
    double wynik = (a + b + c) /3;
    printf("Wynik %lf", wynik);
    return 0;
}
