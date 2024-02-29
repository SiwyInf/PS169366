#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wpisz liczbe calkowita\n");
    scanf("%d", &a);
    int liczba = (a%2 == 0) ? printf("Parzysta") : printf("Nieparzysta");
    return 0;
}
