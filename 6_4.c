#include<stdio.h>

int main() {
    int a[3][3];
    int i, j;
    int *p;
    int max, min;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }

    p = &a[0][0];
    max = *p;
    min = *p;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(*(p + i*3 + j) > max)
                max = *(p + i*3 + j);
            if(*(p + i*3 + j) < min)
                min = *(p + i*3 + j);
        }
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
