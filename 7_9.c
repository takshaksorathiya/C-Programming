#include<stdio.h>

void even(int x) {
    if(x > 20)
        return;
    printf("%d ", x);
    even(x + 2);
}

int main() {
    even(2);
    return 0;
}
