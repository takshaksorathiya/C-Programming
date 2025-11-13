#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    int r = strcmp(a, b);
    if (r < 0)
        printf("First is smaller\n");
    else if (r > 0)
        printf("First is greater\n");
    else
        printf("Both are same\n");
    return 0;
}
