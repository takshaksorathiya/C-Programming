#include <stdio.h>

struct S {
    int r;
    char n[50];
    int m1,m2,m3;
};

int main() {
    struct S s;
    scanf("%d %s %d %d %d", &s.r, s.n, &s.m1, &s.m2, &s.m3);
    int t = s.m1 + s.m2 + s.m3;
    printf("%d %s %d\n", s.r, s.n, t);
    return 0;
}
