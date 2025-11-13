#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
