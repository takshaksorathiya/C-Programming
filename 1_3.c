#include <stdio.h>

int main(){
    int num1,num2,multiply;
    
    printf("enter both the numbers: ");
    scanf("%d %d", &num1 , &num2);

    multiply=num1*num2;
    printf("the multiplication of number is: %d\n" , multiply);

    return 0;
}