#include<stdio.h>

int sumup(int n){

    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}


int main(void){
    int a;
    puts("整数を入力");
    printf("整数a:"); scanf("%d",&a);

    printf("総数は%dです。",sumup(a));
    return 0;

}