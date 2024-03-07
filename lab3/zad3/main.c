#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(int a){
    int wynik =1;
for(int i =1;i<=a;i++){
    wynik *=i;
}
return wynik;
}

int main()
{
    printf("%d\n", calculateFactorial(3));
    return 0;
}
