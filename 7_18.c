#include<stdio.h>

void print(char name[], int n) {
    if(n == 0)
        return;
    printf("%s\n", name);
    print(name, n - 1);
}

int main() {
    char name[50];
    int n;

    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter n: ");
    scanf("%d", &n);

    print(name, n);

    return 0;
}
