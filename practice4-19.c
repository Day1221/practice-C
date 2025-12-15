#include<stdio.h>

int main(void){

    int n;
    int cnt=0;
    printf("整数値を入力:");scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
            cnt++;
        }
    }

    printf("約数は%dです\n",cnt);

    return 0;
}