#include<stdio.h>

int main(void){

    int sum=0;
    int cnt=0;

    int retry;


    do
    {
        int tmp;

        printf("整数値を入力:");scanf("%d",&tmp);

        sum +=tmp;
        cnt++;

        printf("まだ?<YES‥0/No‥1>");scanf("%d",&retry);
    } while (retry == 0);

    printf("合計は%dで、平均値は%.2fです",sum,(double)sum/cnt);

    return 0;
    
}