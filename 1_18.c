#include<stdio.h>

int mainn(){
    int a,p,l,b;

    printf("enter the lenght and breadth of rectangle ");
    scanf("%d %d" , &l , &b);

    a=l*b;
    p=2*(l+b);

    printf("the area and perimeter are %d %d",a,p);
    return 0;

}