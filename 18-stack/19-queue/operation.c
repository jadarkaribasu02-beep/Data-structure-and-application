
#include <stdio.h>
#define MAX 20

typedef struct
{
    int jobId;
    char document[50];
} printJob;

printJob q[MAX];

int front = 0, rear = -1, count = 0;

void push(void)
{
    if (count == MAX)
    {
        printf("QUEUE OVERFLOW: Cannot insert new job\n");
        return;
    }

    rear = (rear + 1) % MAX;

    printf("Enter job ID: ");
    scanf("%d", &q[rear].jobId);

    printf("Enter document name: ");
    scanf(" %49[^\n]", q[rear].document);

    count++;

    printf("Job added successfully\n");
}

void processJob(void)
{
    if (count == 0)
    {
        printf("QUEUE UNDERFLOW: Cannot remove job\n");
        return;
    }

    printf("Processing job %d: %s\n",
           q[front].jobId, q[front].document);

    front = (front + 1) % MAX;

    count--;
}

void display(void)
{
    printf("Number of current jobs: %d\n", count);
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Add\n");
        printf("2. Process\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                processJob();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}
