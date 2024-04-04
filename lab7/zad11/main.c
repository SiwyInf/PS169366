#include <stdio.h>
#include <stdlib.h>

void rmLower(char tab[]){
for(int i =0; tab[i]!='\0';i++){
    if(tab[i] >= 'a' && tab[i]<='z'){
        tab[i] = '\0';
    }
}
}

int main()
{
    char tab[] = {'a','B','c'};
    rmLower(tab);
    for(int i =0; i< sizeof(tab);i++){
        printf("%c", tab[i]);
    }

}
