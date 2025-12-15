#include<stdio.h>

#include<stdio.h>

int main(void){
    int num1,num2,num3;

    puts("三つの整数を入力してください");
    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);
    printf("整数C:");scanf("%d",&num3);


    int min=(num1 < num2 ? num1:num2);
    int min_2=(min < num3 ? min:num3);

    printf("最小値は%dです\n",min_2);

    return 0;
}