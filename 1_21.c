#include<stdio.h>

int main(){

    float a,d,n,g;

    printf("enter gross salary");
    scanf("%d", &g);
    a=g/10;
    d=g*3/100;
    n=(g+a-d);

    printf("the net salary is %f", n);
    return 0;
}