#include <stdio.h>

int main() {
    char asal[] = "Pemrograman C";
    char tujuan[50];
    int i = 0;

    while (asal[i] != '\0') {
        tujuan[i] = asal[i];
        i++;
    }
    tujuan[i] = '\0';

    printf("Asal: %s\n", asal);
    printf("Tujuan: %s\n", tujuan);
    return 0;
}