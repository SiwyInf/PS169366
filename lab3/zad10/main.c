#include <stdio.h>
#include <stdlib.h>
int calculateFibonacciRecursively(int n){
 if(n==1 || n==2){
    return 1;
 }
 else return calculateFibonacciRecursively(n-1) + calculateFibonacciRecursively(n-2);
}

int main()
{
    printf("%d\n", calculateFibonacciRecursively(5));
    printf("%d\n", calculateFibonacciRecursively(10));
    printf("%d\n", calculateFibonacciRecursively(12));
    return 0;
}
