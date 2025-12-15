#include <stdio.h>
#include <string.h>
#include <strings.h> //  strcasecmp (Linux/Mac)

int main() {
    char str1[] = "Hello";
    char str2[] = "HELLO";
    char str3[] = "World";

    printf("strcmp (Hello vs HELLO): %d\n", strcmp(str1, str2));
    printf("strcmp (Hello vs World): %d\n", strcmp(str1, str3));
    printf("strcasecmp (Hello vs HELLO): %d\n", strcasecmp(str1, str2));

    return 0;
}