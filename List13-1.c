#include<stdio.h>

int main(void){

    FILE *fp;

    fp=fopen("abc.txt","r");

    if(fp == NULL){
        printf("ファイルをオープンできませんでした");
    }else{
        printf("ファイルをオープンできました。");
        fclose(fp);
    }

    return 0;
}