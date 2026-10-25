#include <stdio.h>

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf%lf", &a, &b);
    printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\n", a + b, a - b, a * b);
    if (b != 0)
        printf("Quotient = %.2f\n", a / b);
    else
        printf("Cannot divide by zero.\n");
    return 0;
}
