#include <stdio.h>

int main(void)
{
    int d;
    printf("Enter total days: ");
    scanf("%d", &d);
    if (d < 0)
    {
        printf("Days cannot be negative.\n");
        return 1;
    }
    printf("%d year(s), %d week(s), %d day(s)\n", d / 365, (d % 365) / 7, (d % 365) % 7);
    printf("Uses 365 days per year.\n");
    return 0;
}
