#include<stdio.h>

int main(){
    float C,F;
    printf("enter temperature in fahrenheit");
    scanf("%f", &F);

    C=(F-32)*5/9;

    printf("the temperature in celcius is %f" , C);
    return 0;
    
}