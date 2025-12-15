#include<stdio.h>

#define Number 5


int main(void){

    int tensu[Number];
    int sum=0;

    printf("5人の点数を入力\n");
    for(int i=0;i<Number;i++){
        printf("%d番: ",i+1);
        scanf("%d",&tensu[i]);
        sum+=tensu[i];
    }

    printf("合計点:%5d\n",sum);
    printf("平均点:%5.1f\n",(double)sum/Number);

    return 0;
}