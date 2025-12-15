#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);

    if(n>0)
        puts("その数は正です");
    else
        puts("その数は0です");
    else if(n<0)
        puts("その数の負です");


    return 0;
}