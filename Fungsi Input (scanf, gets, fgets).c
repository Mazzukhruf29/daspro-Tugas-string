#include <stdio.h>

int main() {
    char input1[50], input2[50], input3[50];

    printf("1. scanf (tanpa spasi): ");
    scanf("%s", input1);
    getchar();

    printf("2. gets (bahaya): ");
    gets(input2);

    printf("3. fgets (aman): ");
    fgets(input3, 50, stdin);

    printf("\nHasil:\n");
    printf("scanf: %s\n", input1);
    printf("gets: %s\n", input2);
    printf("fgets: %s\n", input3);

    return 0;
}