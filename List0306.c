#include<stdio.h>

int main(void){

    int num1,num2;


    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);

    if(num1 == num2)
        puts("AとBは等しいです");
    else
        puts("AとBは等しくありません");

    return 0;
}
