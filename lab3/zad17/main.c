#include <stdio.h>
#include <stdlib.h>

int calculate17(int n){
    if(n==0 || n==1){
        return 1;
    }
else return calculate17(n-1) + n;
}

int main()
{
    printf("%d\n",calculate17(6));
    return 0;
}
