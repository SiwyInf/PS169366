#include <stdio.h>
#include <stdlib.h>

int condition(int a){
if(a%2==0){
    return 1;
}
else return 0;
}
int action(int b){
return b*5;
}

int applyCondition(int (*condition) (int), int (*action) (int), int value){
if(condition(value) == 1){
    return action(value);
}

else return 0;
}

int main()
{
    int val = 2;
    printf("%d\n",applyCondition(condition,action,val));
    return 0;
}
