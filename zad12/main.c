#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf(" Wpisz liczbe calkowita!\n");
    scanf("%d",&a);
    int bzwgl = a >= 0 ? a : -a;
    printf("Wartosc bezwzgledna to %d", bzwgl);
    return 0;
}
