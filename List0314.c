#include<stdio.h>

int main(void){

    int num1,num2;

    puts("二つの整数を入力せよ");
    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);

    int max=num1 > num2 ? num1 : num2;
    printf("大きい方の値は%dです\n",max);


    return 0;
}
