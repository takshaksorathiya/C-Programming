#include<stdio.h>

int main(){
    float m1,m2,m3,t,a;

    printf("enter score of three subjects");
    scanf("%f %f %f" , &m1 , &m2 , &m3 );
    t=m1+m2+m3;
    a=(t/3);

    printf("the average is %f and total is %f ", a,t);

    return 0;
}