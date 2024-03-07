#include <stdio.h>
#include <stdlib.h>

int sumNumbers(int n){
    if(n==1){
        return 1;
    }
    else return sumNumbers(n-1) + n;
}

int main()
{
    printf("%d\n",sumNumbers(4));
    return 0;
}
