#include<stdio.h>

int main(void){

    int no;

    printf("正の整数を入力:");scanf("%d",&no);

    while (no >= 1)
        printf("%d ",no--);
    if(no <=0){
        putchar('\n');
    }
    return 0;
    
}