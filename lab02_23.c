#include <stdio.h>

int main(){
    int base, exponent,power;
    printf("Enter base:\n");
     scanf("%d",&base);
    printf("Enter exponent:\n");
    scanf("%d",&exponent);
    for (int i = 1; i <= exponent; i++)
    {
      power=base*base;
    }
    printf("Your answer is :%d",power);
    
    return 0;

}