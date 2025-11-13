#include<stdio.h>

int mainn(){
    int a,p,l;

    printf("enter the side of square ");
    scanf("%d" , &l);

    a=l*l;
    p=4*l;

    printf("the area and perimeter are %d %d",a,p);
    return 0;

}