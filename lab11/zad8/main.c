#include <stdio.h>
#include <stdlib.h>

struct Book{
char title[50];
int page_count;
};

struct Book initBook(char* tytul, int liczba_stron){
struct Book newBook;
newBook.title == tytul;
newBook.page_count = liczba_stron;
return newBook;
};

void showBook(struct Book a){
printf("%s ",a.title);
printf("%d",a.page_count);
};

void addPages(struct Book *dodaj){
 dodaj->page_count +=10;
};

int main()
{
    struct Book newBook = {"Potop",389};
    printf("%s %d\n",newBook.title,newBook.page_count);
    showBook(newBook);
    printf("\n");
    addPages(&newBook);
    printf("%s %d\n",newBook.title,newBook.page_count);
    return 0;
}
