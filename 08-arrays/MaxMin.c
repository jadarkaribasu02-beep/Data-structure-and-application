
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input!\n");
        return 1;
    }

    int arr[100];

    printf("Let's go bro! Do it alone:\n");

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nLargest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
