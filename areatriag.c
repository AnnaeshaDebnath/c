#include <stdio.h>

int main() {
    float b, h, area;

    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);

    area = (b * h) / 2;
    printf("Area of triangle = %.2f", area);

    return 0;
}