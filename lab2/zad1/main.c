#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Wpisz liczbe calkowita!\n");
    int a;
    scanf("%d", &a);
    if(a >0){
        printf("Liczba jest dodatnia !");
    }
    if(a <0){
        printf("Liczba jest ujemna !");
    }
    if(a =0){
        printf("Liczba to zero !");
    }
    return 0;
}
