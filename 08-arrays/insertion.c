#include <stdio.h>

int main()
{
    int arr[100], n, i, pos, value;

    printf("enter the size of the array:");
    scanf("%d", &n);

    printf("enter the array elements:");
    scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("entr the position to inset:");
    scanf("%d", &pos);

    printf("entr the value to insert");
    scanf("%d",&value);

    for(i=n; i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    n++;

    printf("array after insertion:");
    for(i=0;i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
    
}