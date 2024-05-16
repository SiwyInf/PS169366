#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
double width;
double height;
char* color;
};

void wypisz(struct Rectangle tablica[],int n){
    for(int i =0;i<n;i++){
        printf("width: %lf, height: %lf , color: %s\n",tablica[i].width, tablica[i].height, tablica[i].color);

    }
}

int main()
{
    struct Rectangle tablica[4] = {
    {20.0,13.1,"zielony"},
    {34.0,12.2,"czarny"},
    {50.0,3.3,"bia³y"},
    {21.0,14.5,"czerwony"}
    };
    wypisz(tablica,4);
    return 0;
}
