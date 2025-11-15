#include<stdio.h>

int a[200];
int p = 0, n = 0, z = 0;

void count(int i) {
    if(i == 200)
        return;

    if(a[i] > 0)
        p++;
    else if(a[i] < 0)
        n++;
    else
        z++;

    count(i + 1);
}

int main() {
    int i;

    for(i = 0; i < 200; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    count(0);

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", n);
    printf("Zeros = %d\n", z);

    return 0;
}
