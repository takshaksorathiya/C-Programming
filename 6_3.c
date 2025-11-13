
#include<stdio.h>

int main() {
    int a[4][4];
    int b[16];
    int i, j, k = 0, temp;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            b[k] = a[i][j];
            k++;
        }
    }

    for(i=0;i<16;i++){
        for(j=i+1;j<16;j++){
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    k = 0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            a[i][j] = b[k];
            k++;
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
