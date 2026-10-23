#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) return 1;

    if (number > 0) printf("Positive\n");
    else if (number < 0) printf("Negative\n");
    else printf("Zero\n");
    return 0;
}
