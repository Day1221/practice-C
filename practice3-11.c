#include<stdio.h>

int main(void){

    int num1,num2,num3;

    puts("二つの整数を入力してください");
    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);

    int diff=num1>num2 ? num1-num2:num2-num1;

    if(diff==10 || diff < 10){
        printf("それらの差は10以下です");
    }else{
        printf("それらの差は11以上です");
    }


    return 0;
}