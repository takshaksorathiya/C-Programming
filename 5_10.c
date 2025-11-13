#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    for (int i = 0; s[i] != 0; i++)
        printf("%c\n", s[i]);
    return 0;
}
