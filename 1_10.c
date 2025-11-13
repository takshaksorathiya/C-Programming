#include <stdio.h> 
int main(){
    float dollar,pound ;
    printf("enter currency in dollar");
    scanf("%f", &dollar);

    pound=dollar*0.69;

    printf("the amount in pound will be:%f", pound);
    return 0;

}