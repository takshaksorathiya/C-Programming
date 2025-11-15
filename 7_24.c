#include<stdio.h>

char s[50];
int b = 0, g = 0;

void count(int i) {
    if(i == 50)
        return;

    if(s[i] == 'B' || s[i] == 'b')
        b++;
    else if(s[i] == 'G' || s[i] == 'g')
        g++;

    count(i + 1);
}

int main() {
    int i;
    char x;

    for(i = 0; i < 50; i++) {
        printf("Enter sex code %d (B/G): ", i + 1);
        scanf(" %c", &s[i]);
    }

    count(0);

    printf("Boys = %d\n", b);
    printf("Girls = %d\n", g);

    return 0;
}
