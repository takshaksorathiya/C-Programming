#include<stdio.h>

int main() {
    char b1[50], b2[50], b3[50];
    char *p[3];

    p[0] = b1;
    p[1] = b2;
    p[2] = b3;

    printf("Enter first book name: ");
    scanf("%49s", p[0]);

    printf("Enter second book name: ");
    scanf("%49s", p[1]);

    printf("Enter third book name: ");
    scanf("%49s", p[2]);

    printf("%s\n", p[0]);
    printf("%s\n", p[1]);
    printf("%s\n", p[2]);

    return 0;
}
