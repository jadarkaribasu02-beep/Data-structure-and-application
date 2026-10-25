#include <stdio.h>

int main(void)
{
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f\n", c * 9.0f / 5.0f + 32.0f);
    return 0;
}
