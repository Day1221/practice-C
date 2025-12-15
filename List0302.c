#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);

    if(n % 2)
        puts("その数は奇数です");

    return 0;
}