#include<stdio.h>
int get_integer(){
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value);
    return value;
    }
int add(int x,int y){
    return x+y;
}

int main(){
    
    int x = get_integer();
    int y = get_integer();

    int plu=add(x,y);

    printf("두수의 합은 %d 입니다",plu);

    return 0;
}