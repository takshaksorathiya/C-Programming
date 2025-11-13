#include<stdio.h>

int main() {
    char w[20][50];
    int n = 0;

    printf("Enter full name: ");

    while (scanf("%49s", w[n]) == 1) {
        n++;
        if (getchar() == '\n')
            break;
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%c. ", w[i][0]);
    }

    printf("%s\n", w[n - 1]);

    return 0;
}
