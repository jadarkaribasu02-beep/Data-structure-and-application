#include <stdio.h>

int main(void) {
    FILE *file = fopen("practice.txt", "w");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }
    fprintf(file, "Practising file handling in C.\n");
    fclose(file);
    printf("Wrote to practice.txt\n");
    return 0;
}
