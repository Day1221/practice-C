#include<stdio.h>

int max2(int a,int b){

    return a>b ? a:b;

}

int max4(int a, int b,int c,int d){

    return max2(max2(a,b),max2(c,d));
}

int main(void){

    int a,b,c,d;
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("整数c:"); scanf("%d",&c);
    printf("整数d:"); scanf("%d",&d);

    printf("最大値は%dです。",max4(a,b,c,d));

    return 0;
}