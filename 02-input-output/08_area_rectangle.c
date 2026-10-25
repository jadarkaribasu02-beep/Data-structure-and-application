#include <stdio.h>

int main(void)
{
    float l, w;
    printf("Enter length and width: ");
    scanf("%f%f", &l, &w);
    printf("Area = %.2f\n", l * w);
    return 0;
}
