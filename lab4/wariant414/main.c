#include <stdio.h>
#include <stdlib.h>

int foo(int a, int b){
int jeden = a %10;
int dwa = b %10;
if(jeden!=dwa){
    return 1;
}
else return 0;
}

int main()
{
    printf("%d\n", foo(123,523));
    printf("%d\n", foo(122,523));
    return 0;
}
