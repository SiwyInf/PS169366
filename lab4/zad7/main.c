#include <stdio.h>
#include <stdlib.h>

float *initFlts() {
    float *wsk = (float *)malloc(4 * sizeof(float));

    *(wsk + 0) = 0.5;
    *(wsk + 1) = 1.5;
    *(wsk + 2) = 2.5;
    *(wsk + 3) = 3.5;

    return wsk + 3;
}

int main() {
    float *wynik = initFlts();

    printf("WSKAZNIK: %p\n", *(wynik));
    printf("1: %.2f\n", *(wynik - 3));
    printf("2: %.2f\n", *(wynik - 2));
    printf("3: %.2f\n", *(wynik - 1));
    printf("4: %.2f\n", *wynik);
    free(wynik);
    return 0;
}
