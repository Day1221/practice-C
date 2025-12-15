#include<stdio.h>

int x=75;


void print_x(void){
    printf("A範囲:ファイル有効範囲\n");
    printf("x=%d\n",x);
}

int main(void){
    
   
    int x=999;

    print_x();
    printf("B範囲:ブロック有効範囲\n");
    printf("x=%d\n",x);
    printf("C範囲:ブロック有効範囲\n");
    for(int i=0;i<5;i++){
        
        int x=i*100;
        printf("x=%d\n",x);
    }

    printf("x=%d\n",x);



}