#include <stdio.h>  
int main(){
    float num1,num2,div;
    
    printf("enter both the numbers: ");
    scanf("%f %f", &num1 , &num2);

    div=num1/num2;
    printf("the division of number is: %f\n" , div);

    return 0;
}