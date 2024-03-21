#include <stdio.h>
#include <stdlib.h>

int calculate (int(*calculate)(int),int number){
return operation(number);
}
int operation(int a){
    return 2 * a;
}

int main()
{
    int number = 2;
    printf("%d\n", calculate(operation,number));
    return 0;
}
