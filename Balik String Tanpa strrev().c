#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Masukkan string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; // hapus newline

    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String terbalik: %s\n", str);
    return 0;
}