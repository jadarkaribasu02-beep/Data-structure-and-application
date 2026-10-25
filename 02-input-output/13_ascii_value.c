#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII/code value = %d\n", (unsigned char)ch);
    return 0;
}
