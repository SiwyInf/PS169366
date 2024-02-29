#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wpisz rok!\n");
    scanf("%d",&a);
    int wynik = (a%4 == 0 && a%100 !=0) || (a%400 ==0)? printf("Przestepny") : printf("Nieprzestepny");
    return 0;
}
