#include<stdio.h>

int main(void){

    FILE *sfp;
    FILE *dfp;

    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名:");scanf("%s",sname);
    printf("コピー先ファイル名:");scanf("%s",dname);

    if((sfp=fopen(sname,"r"))==NULL){
        printf("ファイルをオープンできませんでした\n");
    }else{

        if((dfp=fopen(dname,"w"))==NULL){
            printf("コピー先ファイルをオープンできませんでした\n");
        }else{
            int ch;
            while((ch=fgetc(sfp))!=EOF){
                fputc(ch,dfp);
            }
            fclose(dfp);
        }

        fclose(sfp);
    }

    return 0;
}