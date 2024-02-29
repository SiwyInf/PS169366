#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =10;
    int first = 0;
    int second = 1;
    int i =1;
    while ( i<= n-2){
        int next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
        i++;
    }
    return 0;
}
