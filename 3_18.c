#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;

    for (i = 1; i <= 50; i++) {
        printf("Enter sex code for student %d (M/F): ", i);
        scanf(" %c", &sex);

        if (sex == 'M' || sex == 'm')
            boys++;
        else if (sex == 'F' || sex == 'f')
            girls++;
        else
            printf("Invalid input\n");
    }

    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d", girls);

    return 0;
}
