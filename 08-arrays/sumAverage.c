#include<stdio.h>

int main(){
    int n,i,sum=0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("sum of the array elements:%d\n",sum);

    average=(float)sum/n;
    printf("Average of the array elements: %.2f\n",average);


}

