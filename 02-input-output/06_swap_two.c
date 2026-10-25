#include <stdio.h>

int main(void)
{
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}
