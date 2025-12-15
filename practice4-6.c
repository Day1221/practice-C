#include<stdio.h>

int main(void){

    int no;

    printf("正の整数を入力:");scanf("%d",&no);

    int i=2;
    while(i<=no){
        printf("%d ",i);
        i +=2;
    }

    if(no>0){
        printf("\n");
    }else{
        return 0;
    }

    return 0;
}