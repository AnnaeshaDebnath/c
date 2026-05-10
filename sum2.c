#include <stdio.h>

int main() {
    int num, first, last, sum;

    printf("Enter a six digit number: ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 100000;

    sum = first + last;
    printf("Sum of digits is: %d", sum);

    return 0;
}