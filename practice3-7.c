#include<stdio.h>

int main(void){
    int num1,num2,num3,num4;

    puts("四つの整数を入力してください");
    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);
    printf("整数C:");scanf("%d",&num3);
    printf("整数D:");scanf("%d",&num4);


    int max=num1;

    if(num2>max) 
        max=num2;
    if(num3>max)
        max=num3;
    if(num4>max)
        max=num4;

    printf("最大値は%dです\n",max);

    return 0;
}