#include <stdio.h>
#include <stdlib.h>

int foo(int n,int m, int tab[n][m]){
int ilo =1;
for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
        if(tab[i][j] %2 ==0){
            ilo*=tab[i][j];
        }
    }
}
return ilo;
};

int main()
{
    int tab[3][3]= {
    {1,1,2},
    {1,4,2},
    {1,2,1}
    };

    printf("%d\n", foo(3,3,tab));
    return 0;
}
