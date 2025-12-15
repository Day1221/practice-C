#include<ctype.h>
#include<stdio.h>

int main(void){


FILE *fp;
char file_name[FILENAME_MAX];

printf("ファイル名:");scanf("%s",file_name);

if((fp=fopen(file_name,"rb"))==NULL){
    printf("ファイルをオープンできませんでした。");
}else{

    int n;
    unsigned long count=0;
    unsigned char buf[16];

    while((n=fread(buf,1,16,fp))>0){
        printf("%08lX ",count,n);

        for(int i=0;i<n;i++){
            printf("%02X ", buf[i]);
        }

        if(n<16){
            for(int i=0;i<n;i++){
                printf("   ");
            }
        }

        for(int i=0;i<n;i++){
            putchar(isprint(buf[i]) ? buf[i]: '.');
        }
        putchar('\n');
        count+=16;
    }

    fclose(fp);
}

    return 0;
}