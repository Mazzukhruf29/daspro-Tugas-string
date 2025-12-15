#include <stdio.h>
#include <string.h>

int main() {
    char teks[] = "Belajar Bahasa C";
    char cari;
    int ditemukan = 0;

    printf("Masukkan karakter yang dicari: ");
    scanf("%c", &cari);

    for (int i = 0; i < strlen(teks); i++) {
        if (teks[i] == cari) {
            printf("Karakter '%c' ditemukan di indeks %d\n", cari, i);
            ditemukan = 1;
        }
    }

    if (!ditemukan) {
        printf("Karakter '%c' tidak ditemukan\n", cari);
    }

    return 0;
}