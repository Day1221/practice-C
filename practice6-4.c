#include<stdio.h>

int sqr(int a){
    return a*a;
}

int pow4(int a){
    return sqr(a)*sqr(a);
}

int main(void){

    int a;
    puts("整数を入力してください:");

    printf("整数a:");scanf("%d",&a);

    printf("4乗根の値は%dです。",pow4(a));

}