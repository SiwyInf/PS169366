#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Wpisz dwie liczby calkowite!\n");
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("Wieksza liczba to %d", a);
    }
    else printf("Wieksza liczba to %d", b);
    return 0;
}
