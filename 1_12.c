#include <stdio.h>
int main(){
    float grm,kg;
    printf("enter weight in kg:");
    scanf("%f", &kg);

    grm=kg*1000;
    printf("the weigth in kg is %f" , grm);
    return 0;
}