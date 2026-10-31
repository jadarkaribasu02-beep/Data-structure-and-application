#include<stdio.h>

void evenOdd(int n);

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    evenOdd(n);

    return 0;
}

void evenOdd(int n){
    if(n%2==0){
        printf("even");
    }else{
        printf("odd");
    }
}