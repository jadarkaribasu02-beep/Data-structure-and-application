#include <stdio.h>

int main(void)
{
    float r;
    const float PI = 3.14159265f;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", PI * r * r);
    return 0;
}
