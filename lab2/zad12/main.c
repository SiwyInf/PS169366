#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wpisz liczbe od 0 do 100!\n");
    scanf("%d",&a);
    if(a <0 || a >100){
        printf("Blad zla liczba!");
        return 0;
    }
    int wynik = (a >= 51) ?  printf("Zdane") : printf("Nie zdane");
    return 0;
}
