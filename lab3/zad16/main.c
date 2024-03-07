#include <stdio.h>
#include <stdlib.h>

int calculate16(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }
    else return (2 * calculate16(n-1)) + (3* calculate16(n-2));
}

int main()
{
    printf("%d\n", calculate16(5));
    return 0;
}
