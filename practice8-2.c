#include<stdio.h>

#define max(x,y)   (((x)>(y)) ? (x):(y))


int main(void){


    int a,b,c,d;

    printf("整数を入力:a=");scanf("%d",&a);
    printf("整数を入力:b=");scanf("%d",&b);
    printf("整数を入力:c=");scanf("%d",&c);
    printf("整数を入力:d=");scanf("%d",&d);

    printf("最大値は%dです\n",max(max(a,b),max(c,d)));
    printf("最大値は%dです\n",max(max(max(a,b),c),d));

    return 0;
}

    