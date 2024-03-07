#include <stdio.h>
#include <stdlib.h>

int calculateGCD(int n, int m){
while(m!=0){
    int c = n%m;
    n = m;
    m = c;
}
return n;
}

int main()
{
    printf("%d\n", calculateGCD(12,8));
    return 0;
}
