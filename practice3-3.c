#include<stdio.h>

int main(void){

    int n;

    printf("整数を入力:");scanf("%d",&n);

    if(n>0)
        printf("絶対値は%dです",n);
    else
        printf("絶対値は%dです",-n);


    return 0;
}