//Traverse and display an array

#include<stdio.h>
int main(){
    int arr[100],n,i;

    printf("enteer the array size:");
    scanf("%d",&n);

    if(n>100 && n<0){
        printf("invalid size");
    }

    printf("enter the array elements:");
    for(i =0 ; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("the array elements are:");
    for(i =0 ; i<n; i++){
        printf("%d ",arr[i]);
    }
}