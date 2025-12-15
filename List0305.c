#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);

    if(n)
        puts("その数は0ではありません");
    else
        puts("その数は0です");

    return 0;
}