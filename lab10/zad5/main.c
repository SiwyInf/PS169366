#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int tab[n][m],int tab2[n][m]){
for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
        tab[i][j] = tab2[i][j];
    }
}
}

int main()
{
    int n =3;
    int m =3;
      int tab[3][3];
    int tab2[3][3] = {
    {1,1,1}, {2,2,2}, {3,3,3}
    };

    copyMat(n,m,tab,tab2);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
