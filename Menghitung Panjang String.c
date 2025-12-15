#include <stdio.h>

int main() {
    char kata[] = "Universitas";
    int panjang = 0;

    while (kata[panjang] != '\0') {
        panjang++;
    }

    printf("Kata: %s\n", kata);
    printf("Panjang: %d\n", panjang);

    return 0;
}