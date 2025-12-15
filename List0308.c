#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);

    if((n%10)== 5)
        puts("その数の最下位は5です");
    else
        puts("その数の最下位は5ではありません");


    return 0;
}