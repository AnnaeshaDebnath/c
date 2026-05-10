#include <stdio.h>

int main() {
    int num, d1, d2, d3, sum;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    d1 = num / 100;
    d2 = (num / 10) % 10;
    d3 = num % 10;

    sum = d1 + d2 + d3;
    printf("Sum of digits is: %d", sum);

    return 0;
}