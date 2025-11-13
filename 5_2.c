#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Lowercase: ");
    for (int i = 0; str[i]; i++)
        printf("%c", tolower(str[i]));
    return 0;
}