#include<stdio.h>

int main(){
    float C,F;
    printf("enter temperature in celcius");
    scanf("%f", &C);

    F=(C*9/5)+32;

    printf("the temperature in fahrenheit is %f" , F);
    return 0;
    
}