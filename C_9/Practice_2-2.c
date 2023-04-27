#include<stdio.h>
int main(){
    int x;
    double y;
    
    printf("반지름을 입력하시오:");
    scanf("%d",&x);

    y=x*x*3.14;

    printf("원의 넓이=%f",y);

    return 0;
}