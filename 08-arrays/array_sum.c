    #include <stdio.h>

int main(void) {
    int values[] = {10, 20, 30, 40, 50};
    int n = (int)(sizeof(values) / sizeof(values[0]));
    int sum = 0;

    for (int i = 0; i < n; i++) sum += values[i];
    printf("Sum: %d\n", sum);
    return 0;
}
