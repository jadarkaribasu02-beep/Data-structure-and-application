#include <stdio.h>

int main(void)
{
    float p, r, t;
    printf("Enter principal, rate and time in years: ");
    scanf("%f%f%f", &p, &r, &t);
    printf("Simple interest = %.2f\nTotal amount = %.2f\n", p * r * t / 100.0f, p + (p * r * t / 100.0f));
    return 0;
}
