#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Wpisz liczbe od 1 do 5!\n");
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("Niedostateczny");
        return 0;
    }
    if(a==2){
        printf("Dopuszczajacy");
        return 0;
    }
    if(a==3){
        printf("Dostateczny");
        return 0;
    }
    if(a==4){
        printf("Dobry");
        return 0;
    }
    if(a==5){
        printf("Bardzo dobry");
        return 0;
    }
    else printf("Blad ! zla liczba");
    return 0;
}
