
#include <stdio.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(void)
{
    int x;

    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }

    printf("Enter a number to push: ");
    scanf("%d", &x);

    stack[++top] = x;
    printf("%d pushed into stack\n", x);
}

void pop(void)
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        return;
    }

    printf("%d is removed from stack\n", stack[top--]);
}

void display(void)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
