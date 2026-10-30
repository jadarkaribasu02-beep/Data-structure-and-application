#include<stdio.h>

int add(int a, int b);

int main(){
    int a, b;

    printf("enter first numbers:");
    scanf("%d",&a);


    printf("enter second numbers:");
    scanf("%d",&b);

    int result = add(a,b);

    printf("sum=%d",result);

    return 0;

}

int add(int a, int b){
    return a+b;
}