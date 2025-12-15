#include<stdio.h>

int main(void){


    int no;

    printf("正の整数値を入力:");scanf("%d",&no);

    for(int i=0;i<=no;i++)
        printf("%d ",i);
    putchar('\n');

    return 0;
}