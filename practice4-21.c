#include<stdio.h>

int main(void){

    puts("正方形を作ります");
    int len;

    printf("何段ですか:");scanf("%d",&len);

    for(int i=1;i<=len;i++){
        for(int j=1;j<=len;j++){
            printf("*");
        }
        putchar('\n');

    }

    return 0;
}