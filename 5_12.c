#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    fgets(s, sizeof(s), stdin);
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for (int k = 0; s[k] != 0; k++) {
        char c = s[k];
        if (c == 'a' || c == 'A') a++;
        else if (c == 'e' || c == 'E') e++;
        else if (c == 'i' || c == 'I') i++;
        else if (c == 'o' || c == 'O') o++;
        else if (c == 'u' || c == 'U') u++;
    }
    printf("a %d\n", a);
    printf("e %d\n", e);
    printf("i %d\n", i);
    printf("o %d\n", o);
    printf("u %d\n", u);
    return 0;
}
