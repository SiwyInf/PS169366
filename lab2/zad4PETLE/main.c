#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int wynik = 1;
    if(a<0){
        printf("Zla liczba !");
    }
    for(int i=1;i<=a;i++){
       wynik *= i;
    }
    printf("%d",wynik);
    return 0;
}
