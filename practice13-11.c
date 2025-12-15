#include<stdio.h>

int main(void){

    FILE *fp;
    double a[10]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};

    for(int i=0;i<10;i++){
        printf("a[%d]の値は%lfです\n",i+1,a[i]);
    }

    if((fp = fopen("array.bin","wb")) == NULL){
        printf("ファイルをオープンできませんでした\n");
    }else{

        fwrite(a,sizeof(double),10,fp);
        fclose(fp);
    }


    if((fp = fopen("array.bin","rb")) == NULL){
        printf("ファイルをオープンできませんでした\n");
    }else{

       // 正しい読み込みと表示
        double a_read[10]; // 読み込み用配列
        size_t read_count = fread(a_read, sizeof(double), 10, fp);
        printf("read_count: %zu\n",read_count);

        if (read_count == 10) {
            for(int i=0; i<10; i++){
                printf("ファイルから読み取ったa[%d]の値は%lfです\n", i+1, a_read[i]);
            }
        }
        fclose(fp);
    }

    return 0;
}