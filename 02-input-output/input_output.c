#include <stdio.h>

int main(void) {
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("You entered: %d\n", number);
    return 0;
}
