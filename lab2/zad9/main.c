#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Wpisz trzy liczby calkowite!\n");
    scanf("%d %d %d", &a,&b,&c);
    int wynik = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("Najmniejsza liczba to %d", wynik);
    return 0;
}
