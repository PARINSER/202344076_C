#include<stdio.h>
int main(){
    int w, h, area, perimeter;

    scanf("%d %d",&w, &h);

    area=w*h;
    perimeter=(w+h)*2;

    printf("사각형 넓이=%d \n",area);
    printf("사각형 둘레=%d",perimeter);

    return 0;
}