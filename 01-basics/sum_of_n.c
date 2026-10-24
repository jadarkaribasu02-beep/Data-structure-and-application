#include<Stdio.h>

int main(){
    int n, sum = 0;

    printf("enter a number: ");
    scanf("%d",&n);

    for(int i = 0; i<n;i++){
        sum +=i;
    }

    printf("sum of natural numbers is %d",sum);
}