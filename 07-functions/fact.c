#include<stdio.h>

int fact(int n);

int main(){
    int n;

    printf("enter number:");
    scanf("%d",&n);

    int result = fact(n);

    printf("factorial=%d",result);
    return 0;
}

int fact(int n){
    int fac=1;
    for(int i = 1; i<=n;i++){
        fac = fac*i;
    }

    return fac;
}