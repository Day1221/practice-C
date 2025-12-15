#include<stdio.h>

int main(void){

    char str[]="ABC\0DEF";

    printf("文字列strは%sです.\n",str);
    printf("配列の4番の要素は\"%s\"です",str[4]);

    return 0;
}