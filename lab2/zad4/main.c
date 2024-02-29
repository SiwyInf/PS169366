#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Wpisz 3 liczby calkowite!\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int najmn = a;
    if(b<najmn){
        najmn = b;
    }
    if(c<najmn){
        najmn = c;
    }
    printf("Najmniejsza liczba to %d", najmn);
    return 0;
}
