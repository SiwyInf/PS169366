#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Wpisz dwie liczby calkowite!\n");
    scanf("%d %d", &a,&b);
    int c = (a > b) ? a :b;
    printf("Wieksza liczba to %d", c);
    return 0;
}
