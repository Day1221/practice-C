#include<stdio.h>

int main(void){

    int no;
    int cnt=0;

    do{
        printf("正の整数を入力:");
        scanf("%d",&no);
        if(no<=0){
            puts("正でない数を入力");
        }
    }while(no <=0);

    printf("%dは",no);
    while(no>0){
        no /=10;
        cnt++;
    }
    printf("%d桁です",cnt);

    return 0;
}