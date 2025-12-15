#include <stdio.h>

int main() {
    char teks[100];
    int panjang = 0;

    printf("Masukkan string: ");
    fgets(teks, 100, stdin);

    while (teks[panjang] != '\0' && teks[panjang] != '\n') {
        panjang++;
    }

    printf("Panjang string: %d\n", panjang);
    return 0;
}