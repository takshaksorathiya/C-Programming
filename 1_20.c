#include<stdio.h>

int main(){
    float h,b,a;
    

    printf("enter height and base of triangle");
    scanf("%f" , &h ,&b);

    a=h*b*(1/2);

    printf ("the area is %f" , a);
    return 0;
}