#include <stdio.h>  

int main(){
    float num1,num2,add,sub,multiply,div;
    
    printf("enter both the numbers:");
    scanf("%f %f", &num1 , &num2);

    add=num1+num2;
    sub=num1-num2;
    div=num1/num2;
    multiply=num1*num2;

    printf("the addition,subtraction,division and multiplication respectively of numbers are %f\n %f\n %f\n %f\n",add, sub,div,multiply);

    return 0;
}