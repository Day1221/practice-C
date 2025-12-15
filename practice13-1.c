#include<stdio.h>

int main(void){

    FILE *fp;

    fp=fopen("abc.txt","r");

    if(fp == NULL){
        printf("そのファイルは存在しませんでした");
    }else{
        printf("ファイルは存在します。");
        fclose(fp);
    }

    return 0;
}