#include <stdio.h>
#include <string.h>

int main(void) {
    char word[50];
    printf("Enter one word: ");
    if (scanf("%49s", word) != 1) return 1;
    printf("Word: %s\nLength: %zu\n", word, strlen(word));
    return 0;
}
