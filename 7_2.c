#include<stdio.h>

int leap(int );

int leap(int y){
    if((y%4)==0)
        return 1;
    else 
        return 0;
    
}

int main(){
    int y;
    printf("enter year:");
    scanf("%d" , &y);
    
    if(leap(y)){
        printf("it is leap year!");
    }else {
        printf("it is not a leap year!");
    }
}