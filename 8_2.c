#include <stdio.h>

struct C {
    int a;
    char n[50];
    float b;
};

void low(struct C x[], int k) {
    for(int i=0;i<k;i++)
        if(x[i].b < 100)
            printf("%d %s %.2f\n", x[i].a, x[i].n, x[i].b);
}

void t(struct C x[], int k, int ac, float amt, int c) {
    int i;
    for(i=0;i<k;i++)
        if(x[i].a == ac) break;
    if(i==k) { printf("NF"); return; }
    if(c==1) { x[i].b += amt; printf("%.2f", x[i].b); }
    else {
        if(x[i].b < amt) printf("Insufficient");
        else { x[i].b -= amt; printf("%.2f", x[i].b); }
    }
}

int main() {
    struct C x[10];
    int k, ac, c;
    float amt;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
        scanf("%d %s %f", &x[i].a, x[i].n, &x[i].b);
    low(x,k);
    scanf("%d %f %d", &ac, &amt, &c);
    t(x,k,ac,amt,c);
    return 0;
}
