#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Wpisz liczbe calkowita\n");
    scanf("%d",&n);
    for (int i = -n; i <= n; ++i) {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
