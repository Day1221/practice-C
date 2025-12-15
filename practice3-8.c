#include<stdio.h>

int main(void){

    int num1,num2;

    puts("二つの整数を入力せよ");
    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);

    if(num1>num2)
        printf("それらの差は%dです\n", num1-num2);
    else
        printf("それらの差は%dです\n", num2-num1);


    return 0;
}
