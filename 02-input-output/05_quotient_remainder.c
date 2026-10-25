#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter dividend and divisor: ");
    scanf("%d%d", &a, &b);
    if (b == 0)
    {
        printf("Cannot divide by zero.\n");
        return 1;
    }
    printf("Quotient = %d\nRemainder = %d\n", a / b, a % b);
    return 0;
}
