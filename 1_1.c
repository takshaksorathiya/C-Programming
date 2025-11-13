#include <stdio.h>   

int main(){
    int num1,num2,sum;
    
    printf("enter both the numbers: ");
    scanf("%d %d", &num1 , &num2);

    sum=num1+num2;
    printf("the sum of number is: %d\n" , sum);

    return 0;
}