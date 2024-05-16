#include <stdio.h>
#include <stdlib.h>

struct Person{
char name[20];
int age
};

struct Person initPerson(char* imie, int wiek){
struct Person newPerson;
strcpy(newPerson.name, imie);
newPerson.age = wiek;
return newPerson;
};

int main()
{
    struct Person osoba = initPerson ("Maro", 30);
    printf("%s %d\n",osoba.name, osoba.age);
    return 0;
}
