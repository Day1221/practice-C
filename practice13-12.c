#include<time.h>
#include<stdio.h>

char data_file[]="datatime.bin";


typedef struct {

    int year;
    int month;
    int day;
    int h;
    int m;
    int s;
} datetime;

void get_data(void){

    FILE *fp;

    if((fp=fopen(data_file,"rb"))==NULL){
        printf("本プログラムを実行するのは初めてですね\n");
    }else{

        int year,month,day,h,m,s;

        datetime dt_read;
        fread(&dt_read,sizeof(datetime),1,fp);
        printf("前回は%d年%d月%d日%d時%d分%d秒でした\n",
                dt_read.year,dt_read.month,dt_read.day,
                dt_read.h,dt_read.m,dt_read.s);

        fclose(fp);
    }

}

void put_data(void){

    FILE *fp;
    
    if((fp=fopen(data_file,"wb"))==NULL){
        printf("ファイルをオープンできません\n");
    }else{
        time_t current=time(NULL);
        struct tm *timer=localtime(&current);

        datetime date={
            timer->tm_year+1900,
            timer->tm_mon+1,
            timer->tm_mday,
            timer->tm_hour,
            timer->tm_min,
            timer->tm_sec
        };
        fwrite(&date,sizeof(datetime),1,fp);
        fclose(fp);


    }
}


int main(void){

    get_data();
    put_data();

    return 0;
}