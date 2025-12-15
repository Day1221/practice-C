#include<stdio.h>
#include<time.h>

int main(void){

    FILE *fp;

    if((fp = fopen("dt_date.txt","w")) == NULL){
        printf("ファイルをオープンできません");
    }else{
        time_t current= time(NULL);
        struct tm *timer = localtime(&current);

        printf("現在の時刻・時間を書き出しました\n");
        fprintf(fp,"%d %d %d %d %d %d\n",
                timer->tm_year+1900,timer->tm_mon+1,timer->tm_mday
                ,timer->tm_hour,timer->tm_min,timer->tm_sec);

        fclose(fp);
    }

    return 0;
}