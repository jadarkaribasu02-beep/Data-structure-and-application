#include <stdio.h>

int main(void)
{
    int n, x, i;
    long long sum = 0;
    printf("How many numbers? ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter a positive count.\n");
        return 1;
    }
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }
    printf("Sum = %lld\n", sum);
    return 0;
}
