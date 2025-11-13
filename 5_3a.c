#include <stdio.h>
#include <ctype.h>

int main() {
    char x[100];
    printf("Enter a string: ");
    scanf("%s", x);
    for (int y = 0; x[y]; y++)
        printf("%c", toupper(x[y]));
    return 0;
}
