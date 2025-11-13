#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            printf("Not Palindrome\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome\n");
    return 0;
}
