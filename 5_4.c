#include <stdio.h>
#include <ctype.h>

int main() {
    char x[100];
    int y;
    printf("Enter a string: ");
    scanf("%s", x);
    for (y = 0; x[y]; y++) {
        if (x[y] >= 'a' && x[y] <= 'z')
            x[y] = toupper(x[y]);
        else if (x[y] >= 'A' && x[y] <= 'Z')
            x[y] = tolower(x[y]);
    }
    printf("Toggle case: %s", x);
    return 0;
}
