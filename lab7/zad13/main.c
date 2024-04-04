#include <stdio.h>
#include <stdlib.h>

void cutStr(char tab[], int n, int m) {
    int i, j;
    if (n >= m || n < 0 || m < 0) {
        return;
    }

    for (i = n, j = 0; tab[i] != '\0'; i++, j++) {
        tab[j] = tab[i];
    }
    tab[j] = '\0';

    if (m < j) {
        tab[m] = '\0';
    }
}

int main() {
    char tab1[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    int n = 1;
    int m = 3;

    printf("%s\n", tab1);
    cutStr(tab1, n, m);
    printf("%s\n", tab1);

    return 0;
}
