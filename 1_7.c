#include <stdio.h>  

int main(){
    float hrs,min;
    printf("enter time in min:");
    scanf("%f" , &min);

    hrs=min/60;
    printf("the time in hours is:%f\n", hrs);

    return 0;
}