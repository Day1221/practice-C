#include<stdio.h>
#include<unistd.h>

int main(void){

    FILE *fp;
    char fname[FILENAME_MAX];

    printf("ファイル名:");scanf("%s",fname);

    if((fp=fopen(fname,"r"))==NULL){
        printf("ファイルをオープンできませんでした\n");
    }else
    {
        int ch;
        int count=0;

        while((ch= fgetc(fp))!=EOF){
            putchar(ch);
            if(ch==10){
            count++;
            }
        }
        printf("指定したファイルの行数は%dです\n",count);
        fclose(fp);
    }

    return 0;
}