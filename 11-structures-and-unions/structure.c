#include <stdio.h>

struct Student {
    int usn;
    char name[30];
};

int main(void) {
    struct Student student = {101, "Asha"};
    printf("USN: %d\nName: %s\n", student.usn, student.name);
    return 0;
}
