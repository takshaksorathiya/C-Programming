#include <stdio.h>

int main() {
    int a[10], i, j, c;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < 10; i++) {
        c = 1;
        for(j = i + 1; j < 10; j++) {
            if(a[i] == a[j]) {
                c++;
                a[j] = -1;
            }
        }
        if(a[i] != -1)
            printf("%d occurs %d times\n", a[i], c);
    }
    return 0;
}