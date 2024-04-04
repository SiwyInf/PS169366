#include <stdio.h>
#include <stdlib.h>

int sum_of_elements_greater_than_average(int n, int numbers[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    int srednia = sum / n;

    int sumaWiekszych = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] > srednia) {
            sumaWiekszych += numbers[i];
        }
    }
    return sumaWiekszych;
}

int main() {
    int tab[] = {1, 2, 3, 4};
    printf("%d\n", sum_of_elements_greater_than_average(4, tab));
    return 0;
}
