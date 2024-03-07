#include <stdio.h>
#include <stdlib.h>

int calculate15(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }
    else return  calculate15(n-1) + 2 * calculate15(n-2);
}

int main()
{
    printf("%d\n", calculate15(5));
    return 0;
}
