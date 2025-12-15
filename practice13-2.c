#include<stdio.h>

int main(void){

    FILE *fp;

    char file_name[48];
    printf("ファイル名を入力してください:");scanf("%s",file_name);
    fp=fopen(file_name,"r");

    if(fp == NULL){
        printf("そのファイルは存在しませんでした");
    }else{
        printf("ファイルは存在します。");
        fclose(fp);
    }

    return 0;
}