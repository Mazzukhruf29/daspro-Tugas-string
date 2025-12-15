#include <stdio.h>

int main() {
    char nama1[50], nama2[50];

    printf("Masukkan nama (tanpa spasi): ");
    scanf("%s", nama1);
    getchar(); // membersihkan newline

    printf("Masukkan nama lengkap: ");
    fgets(nama2, 50, stdin);

    printf("Nama 1: %s\n", nama1);
    printf("Nama 2: %s\n", nama2);

    return 0;
}