#include <stdio.h>
#include <string.h>

void foo(char napis[]) {
    int j = 0;
    for (int i = 0; napis[i] != '\0'; i++) {
        if (napis[i] != '!') {
            napis[j++] = napis[i];
        }
    }
    napis[j] = '\0';
}

int main() {
    char napis[] = "ol!sztyn!";
    printf("%s\n", napis);
    foo(napis);
    printf("%s\n", napis);
    return 0;
}
