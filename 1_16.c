#include<stdio.h>

int main(){
    int I,P,R,N;
    printf("enter priciple amount , rate of intrest , and number of years");
    scanf("%f %f %f" , &P, &R , &N);

    I=P*R*N/100;
    printf("the intrest is %f", I);
    return 0;
}