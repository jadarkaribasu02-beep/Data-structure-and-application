#include<Stdio.h>
 int main(){
    int arr[100],n,i,pos;

    printf("enter the size of the array:");
    scanf("%d",&n);

    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the position to delete:");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("array after deletion:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }