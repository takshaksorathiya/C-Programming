#include <stdio.h>  

int main(){
    float dollar,inr;
    printf("enter currency in dollar");
    scanf("%f" , &dollar);

    inr=dollar*48;    
    printf("the currency in inr is %f\n", inr);
    
    return 0;
}