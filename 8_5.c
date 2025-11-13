#include <stdio.h>
#include <string.h>

union U {
    int i;
    float f;
    char s[20];
};

int main() {
    union U u;
    u.i = 10;
    printf("%d\n", u.i);
    u.f = 2.5;
    printf("%.2f\n", u.f);
    strcpy(u.s,"hi");
    printf("%s\n", u.s);
    return 0;
}
