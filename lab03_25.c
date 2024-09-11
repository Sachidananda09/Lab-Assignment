#include <stdio.h>

int main() {
    int num, i;

    // Input number from the user
    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    // Print the multiplication table of the given number
    printf("Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
