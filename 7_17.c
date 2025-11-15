#include<stdio.h>

void print(char name[], int x) {
    if(x == 0)
        return;
    printf("%s\n", name);
    print(name, x - 1);
}

int main() {
    char name[50];
    printf("Enter name: ");
    scanf("%s", name);

    print(name, 5);

    return 0;
}
