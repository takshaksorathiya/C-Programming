#include <stdio.h>

int main() {
    int a[10] = {1,2,3,5,4,6,7,8,9,10};
    int index;
    int value;
    
    printf("Enter Index new element should be insert: ");
    scanf("%d",&index);
    printf("Enter the value to be insert ");
    scanf("%d",&value);
    
    a[index] = value;
    
    for(int i = 0;i<10;i++){
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}