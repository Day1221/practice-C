#include<stdio.h>

#define Number 5


int main(void){

    int tensu[Number];
    int min,max;

    printf("5人の点数を入力\n");
    for(int i=0;i<Number;i++){
        printf("%d番: ",i+1);
        scanf("%d",&tensu[i]);
    }

    min=max=tensu[0];
    for(int i=0;i<Number;i++){
        if(tensu[i]>max) max=tensu[i];
        if(tensu[i]<min) min=tensu[i];
    }
    printf("最高点:%d\n",max);
    printf("最低点:%d\n",min);

    return 0;
}