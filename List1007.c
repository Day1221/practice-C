#include<stdio.h>

void swap(int *x,int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;

}


int main(void){
    int a,b;

    puts("二つの整数を入力してください:");
    printf("整数A:");scanf("%d",&a);
    printf("整数B:");scanf("%d",&b);

    swap(&a,&b);


    puts("値を交換しました");
    printf("整数A:%d\n",a);
    printf("整数B:%d\n",b);

    return 0;
}