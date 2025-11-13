#include <stdio.h>  

int main(){
    int hrs,min;
    printf("enter time in hrs:");
    scanf("%d" , &hrs);

    min=hrs*60;
    printf("the time in minutes is:%d\n", min);

    return 0;
}