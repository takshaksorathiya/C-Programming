#include <stdio.h>

struct C {
    char n[50];
    int a;
    int t;
    float g;
};

int main() {
    struct C x[10], z;
    for(int i=0;i<10;i++)
        scanf("%s %d %d %f", x[i].n, &x[i].a, &x[i].t, &x[i].g);

    for(int i=0;i<9;i++)
        for(int j=0;j<9-i;j++)
            if(x[j].g > x[j+1].g) {
                z = x[j];
                x[j] = x[j+1];
                x[j+1] = z;
            }

    for(int i=0;i<10;i++)
        printf("%s %d %d %.2f\n", x[i].n, x[i].a, x[i].t, x[i].g);

    return 0;
}
