#include <stdio.h>
#include <string.h>

int main() {
    char sumber[] = "Belajar";
    char tujuan[20];
    char str1[] = "Halo";
    char str2[] = "HALO";
    char balik[] = "Kasur";

    strcpy(tujuan, sumber);
    printf("strcpy: %s\n", tujuan);

    printf("strlen: %lu\n", strlen(sumber));

    printf("strcmp (Halo vs HALO): %d\n", strcmp(str1, str2));

    // strcmpi tidak standar, alternatif: strcasecmp di Linux
    // printf("strcmpi (Halo vs HALO): %d\n", strcmpi(str1, str2));

    printf("strrev: %s\n", strrev(balik));

    return 0;
}