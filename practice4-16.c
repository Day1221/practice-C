#include<stdio.h>

int main(void){

    int n;
    printf("整数値を入力:");scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==1) {
            printf("%d ",i);
        }
    }
    putchar('\n');

    return 0;
}