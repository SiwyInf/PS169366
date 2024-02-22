#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 1.0f;
    float b = 1e20;
    float c = -1e20;

    float wynik1 = (a + b) + c;
    float wynik2 = a + (b + c);

    printf("(a + b) + c = %.10f\n", wynik1);
    printf("a + (b + c) = %.10f\n", wynik2);

    return 0;
}
