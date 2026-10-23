#include <stdio.h>

int main(void) {
    int number = 25;
    int *ptr = &number;
    printf("Value: %d\n", number);
    printf("Address stored in pointer: %p\n", (void *)ptr);
    printf("Value through pointer: %d\n", *ptr);
    return 0;
}
