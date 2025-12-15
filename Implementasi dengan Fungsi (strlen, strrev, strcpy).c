#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Informatika";
    char salin[50];

    printf("Panjang dengan strlen: %lu\n", strlen(str));

    strcpy(salin, str);
    printf("Hasil strcpy: %s\n", salin);

    printf("String dibalik dengan strrev: %s\n", strrev(str));

    return 0;
}