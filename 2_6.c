#include <stdio.h>

int main() {
    float m1, m2, m3, total, avg;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    if ((m1 < 35) || (m2 < 35) || (m3 < 35)) {
        printf("Result: Fail");
    } else {
        total = m1 + m2 + m3;
        avg = total / 3;

        printf("Total = %f\n", total);
        printf("Average = %f\n", avg);

        if (avg >= 70)
            printf("Grade: Distinction");
        else if (avg >= 60)
            printf("Grade: First Class");
        else if (avg >= 50)
            printf("Grade: Second Class");
        else if (avg >= 35)
            printf("Grade: Third Class");
        else
            printf("Fail");
    }

    return 0;
}
