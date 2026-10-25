#include <stdio.h>

int main(void)
{
    int m;
    printf("Enter total minutes: ");
    scanf("%d", &m);
    if (m < 0)
    {
        printf("Minutes cannot be negative.\n");
        return 1;
    }
    printf("%d hour(s), %d minute(s)\n", m / 60, m % 60);
    return 0;
}
