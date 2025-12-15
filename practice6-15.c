#include<stdio.h>

void put_count(void){
    static int i=1;
    printf("put_count:%d回目\n",i++);
}

int main(void){

    int num;

    printf("呼び出し回数を教えて:");scanf("%d",&num);
    for(int i=0;i<num;i++){
        put_count();
    }

    return 0;
}