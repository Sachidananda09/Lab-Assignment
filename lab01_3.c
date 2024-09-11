//3. programe to calculate gross salary
#include <stdio.h>

int main(){
    float basic_salary, hra,Transport_allowance,Medical_allowance,Gross_salary;
    printf("Enter your basic salary:\n");
    scanf("%f",&basic_salary);
    hra= 0.30*basic_salary;
    Transport_allowance= 0.20*basic_salary;
    Medical_allowance= 4000;
    Gross_salary=hra+Transport_allowance+basic_salary+Medical_allowance;
    printf("Your Gross salary is %d\n",Gross_salary);
    return 0;
}
