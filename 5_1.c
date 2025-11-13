#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string single word: ");
    scanf("%s", str);
    printf("Length of the string = %d", strlen(str));
    return 0;
}
