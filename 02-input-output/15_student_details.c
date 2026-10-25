#include <stdio.h>

int main(void)
{
    char name[50];
    int age;
    float marks;
    printf("Enter first name (no spaces): ");
    scanf("%49s", name);
    printf("Enter age and marks: ");
    scanf("%d%f", &age, &marks);
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", name, age, marks);
    return 0;
}
