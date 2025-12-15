#include<time.h>
#include<stdio.h>

char data_file[]="datatime.dat";
char name[64]="";
void get_data(void){

    FILE *fp;

    if((fp=fopen(data_file,"r"))==NULL){
        printf("本プログラムを実行するのは初めてですね\n");
    }else{
        printf("%d\n",&fp);
        int year,month,day,h,m,s;

        fscanf(fp,"%d%d%d%d%d%d%s",&year,&month,&day,&h,&m,&s,name);
        printf("前回は%d年%d月%d日%d時%d分%d秒で,気分は%sでした\n",
                year,month,day,h,m,s,name);

        fclose(fp);
    }

}

void put_data(void){

    FILE *fp;
    
    if((fp=fopen(data_file,"w"))==NULL){
        printf("ファイルをオープンできません\n");
    }else{

        printf("現在の気分は:");scanf("%s",name);
        time_t current=time(NULL);
        struct tm *timer=localtime(&current);

        fprintf(fp,"%d %d %d %d %d %d %s\n",
                timer->tm_year+1900,timer->tm_mon+1,timer->tm_mday,
                timer->tm_hour,timer->tm_min,timer->tm_sec,name);

        fclose(fp);


    }
}


int main(void){

    get_data();
    put_data();

    return 0;
}