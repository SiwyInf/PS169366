#include <stdio.h>
#include <stdlib.h>

struct Computer{
char* brand;
int number_of_cores;
};

struct Computer computer(struct Computer tablica[], int n){
struct Computer max = tablica[0];
for(int i =1;i<n;i++){
    if(tablica[i].number_of_cores > max.number_of_cores){
        max = tablica[i];
    }
}
return max;
};

int main()
{
    struct Computer komputery[] = {
        {"Dell", 8},
        {"HP", 12},
        {"Apple", 6},
        {"Lenovo", 16}
    };
    int rozmiar = sizeof(komputery) / sizeof(komputery[0]);

    struct Computer max_komputer = computer(komputery, rozmiar);
    printf("Najwieksza liczba rdzeni: %d\n", max_komputer.number_of_cores);
    return 0;
}
