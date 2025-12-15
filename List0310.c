#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);

    if(n>0)
        if(n%2)
            puts("その数の奇数です");
        else
            puts("その数の偶数です");
    else
        puts("正ではない値が入力されました");
    return 0;
}