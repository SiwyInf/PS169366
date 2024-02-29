#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wpisz rok!\n");
    scanf("%d",&a);
    if(a%4==0 && a%100 != 0 || a %400 == 0){
        printf("Jest to rok przestepny !");
    }
    else printf("Nie jest to rok przestepny");
    return 0;
}
