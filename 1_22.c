#include<stdio.h>

int main(){

    float n,d,g;

    printf("enter the gross sales");
    scanf("%f ", &g);
    d=g/10;
    n=(g-d);

    printf("the net sales are %f", n);
    return 0;

}