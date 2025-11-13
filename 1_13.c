#include <stdio.h>

int main() {
    float bytes, kb, mb, gb;

    printf("Enter bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("\nKB = %.2f", kb);
    printf("\nMB = %.2f", mb);
    printf("\nGB = %.2f", gb);

    return 0;
}
