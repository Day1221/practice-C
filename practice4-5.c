#include<stdio.h>

int main(void){

    int no;

    printf("正の整数を入力:");scanf("%d",&no);

    int i=1;
    while(i<=no)
        printf("%d ",i++);

    if(no>0){
        printf("\n");
    }else{
        return 0;
    }

    return 0;
}