#include <stdio.h>
#include <stdlib.h>

int countNums(char tab[]){
int sum =0;
for(int i =0; i<sizeof(tab);i++){
if(tab[i]>='0' && tab[i] <='9'){
    sum++;
}
}
return sum;
}

int main()
{
    char tab[] = {'a','4','b','4','9'};
    printf("%d", countNums(tab));
    return 0;
}
