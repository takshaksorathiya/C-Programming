#include <stdio.h>
int main() {
    int a[5], x, y, z;
    for(x = 0; x < 5; x++)
        scanf("%d", &a[x]);

    for(x = 0; x < 5; x++) {
        for(y = x + 1; y < 5; y++) {
            if(a[x] > a[y]) {
                z = a[x];
                a[x] = a[y];
                a[y] = z;
            }
        }
    }

    for(x = 0; x < 5; x++)
        printf("%d\n", a[x]);

    return 0;
}