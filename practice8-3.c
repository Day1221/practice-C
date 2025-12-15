#include<stdio.h>

#define swap(type,x,y) {type tmp=x; x=y; y=tmp;}

int main(void){

    int x;
    int y;

    printf("整数を入力:a=");scanf("%d",&x);
    printf("整数を入力:b=");scanf("%d",&y);
    printf("変更前 %d:%d\n",x,y);
    
    swap(int,x,y);
    printf("変更後 %d:%d\n",x,y);



    return 0;
}