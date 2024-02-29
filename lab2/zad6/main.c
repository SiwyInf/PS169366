#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Wpisz dwie liczby calkowite!\n");
    scanf("%d %d", &a,&b);
    if((a+b)%2 == 0){
        printf("Jest to liczba parzysta");
    }
    else printf("Nie jest to liczba parzysta");
    return 0;
}
