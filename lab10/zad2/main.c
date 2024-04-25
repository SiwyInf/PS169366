#include <stdio.h>
#include <stdlib.h>

int sumArray(int n, int m, int tab[n][m]){
int sum =0;
for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
        sum += tab[i][j];
    }
}
return sum;
}

int main()
{
    int n =3;
    int m =3;
    int tab[3][3] = {
    {1,1,1}, {2,2,2}, {3,3,3}
    };
    printf("%d\n",sumArray(n,m,tab));
    return 0;
}
