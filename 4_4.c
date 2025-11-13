#include <stdio.h>
int main() {
    int n, x;
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter amount: ");
    scanf("%d", &n);

    for(x = 0; x < 9; x++) {
        if(n >= notes[x]) {
            printf("%d note(s) of Rs.%d\n", n / notes[x], notes[x]);
            n = n % notes[x];
        }
    }

    return 0;
}
