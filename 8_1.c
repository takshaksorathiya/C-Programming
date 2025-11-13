#include <stdio.h>

struct S { 
    char name[50]; 
    char c[50]; 
    char maj[50]; 
    char min[50]; 
};

void all(struct S s[], int n) {
    for(int i=0;i<n;i++)
        printf("%d %s\n", i+1, s[i].name);
}

void one(struct S s[], int r) {
    r--;
    printf("%s %s %s %s\n", s[r].name, s[r].c, s[r].maj, s[r].min);
}

int main() {
    struct S s[10];
    int i,r;
    for(i=0;i<10;i++)
        scanf("%s %s %s %s", s[i].name, s[i].c, s[i].maj, s[i].min);
    all(s,10);
    scanf("%d",&r);
    one(s,r);
    return 0;
}
