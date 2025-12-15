#include<stdio.h>

int main(void){

    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名:");scanf("%s",fname);

    if((fp=fopen(fname,"r"))==NULL){
        printf("ファイルをオープンできませんでした\n");
    }else
    {
        int ch;

        while((ch= fgetc(fp))!=EOF){
            putchar(ch);
        }
        fclose(fp);
    }

    return 0;
}