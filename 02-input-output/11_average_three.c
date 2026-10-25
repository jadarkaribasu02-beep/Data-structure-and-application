#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Average = %.2f\n", (a + b + c) / 3.0f);
    return 0;
}
