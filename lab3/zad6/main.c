#include <stdio.h>
#include <stdlib.h>

int calculatePowerOfTwo(int n){
if(n==0){
    return 1;
}
if(n==1){
    return 2;
}
else return 2 * calculatePowerOfTwo(n-1);
}

int main()
{
    printf("%d\n",calculatePowerOfTwo(4));
    return 0;
}
