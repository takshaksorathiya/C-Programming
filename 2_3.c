#include <stdio.h>

int main() {
    float gross, allowances, deductions, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowances = gross * 0.10;
        deductions = gross * 0.03;
    } else if (gross > 5000){
        allowances = gross * 0.07;
        deductions = gross * 0.02;
    } else {
        printf("salary is below 5000");
    }

    net = gross + allowances - deductions;

    printf("\nNet Salary = %f", net);

    return 0;
}
