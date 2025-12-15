#include<stdio.h>

int main(void){

    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名:");scanf("%s",fname);

    if((fp=fopen(fname,"r"))==NULL){
        printf("ファイルをオープンできませんでした");

    }else{
        int ch,count=0;

        while((ch=fgetc(fp))!=EOF){
            if(ch>='0'&& ch<='9'){
                count++;
            }
            putchar(ch);
        }

        printf("数字文字の個数は%dです\n",count);
    }


    return 0;
}