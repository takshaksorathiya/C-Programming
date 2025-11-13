#include <stdio.h>  

int main(){
    float dollar,inr;
    printf("enter currency in rupees");
    scanf("%f" , &inr);

    dollar=inr/48;    
    printf("the currency in dollar is %f\n", dollar);
    
    return 0;
}
