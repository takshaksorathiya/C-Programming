#include <stdio.h>  

int main(){
    int num1,num2,SUB;
    
    printf("enter both the numbers: ");
    scanf("%d %d", &num1 , &num2);

    SUB=num1-num2;
    printf("the subtraction of number is: %d\n" , SUB);

    return 0;
}