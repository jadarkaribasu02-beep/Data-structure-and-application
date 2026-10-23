#include <stdio.h>

int main(void) {
    int values[] = {7, 2, 9, 4, 1};
    int target = 9;
    int n = (int)(sizeof(values) / sizeof(values[0]));

    for (int i = 0; i < n; i++) {
        if (values[i] == target) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
