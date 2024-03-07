#include <stdio.h>
#include <stdlib.h>

int wynik =0;
void countFunctionCalls(){
    wynik++;
    printf("%d\n",wynik);
}

int main()
{
   countFunctionCalls();
   countFunctionCalls();
   countFunctionCalls();
    return 0;
}
