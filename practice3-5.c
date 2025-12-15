#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);
    int check1=(n>0);
    int check2=(n==0);

    printf("check1の値:%d\n",check1);
    printf("check2の値:%d\n",check2);

    return 0;
}