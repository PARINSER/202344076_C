#include<stdio.h>

int main(){

    double hwn,usd;
    int krw;

    printf("환율을 입력하시오= \n");
    scanf("%lf",&hwn);

    printf("원화를 입력하시오= \n");
    scanf("%d",&krw);

    usd = (double)krw / hwn;

    printf("원화 %d는 %f달러 입니다.",krw, usd);

    return 0;
}
