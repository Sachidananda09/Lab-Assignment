#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;

    
    printf("Enter marks of subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks of subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks of subject 5: ");
    scanf("%f", &subject5);

    
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500) * 100;  

    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}