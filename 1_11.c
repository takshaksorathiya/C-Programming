#include <stdio.h>  
int main(){
    float grm,kg;
    printf("enter weight in gram:");
    scanf("%f", &grm);

    kg=grm/1000;
    printf("the weigth in kg is %f" , kg);
    return 0;
}