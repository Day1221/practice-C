#include<stdio.h>

int main(void){

    int no;

    printf("正の整数を入力:");scanf("%d",&no);

    while (no >= 0)
        printf("%d ",no--);
    putchar('\n');

    return 0;
    
}