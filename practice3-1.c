#include<stdio.h>

int main(void){

    int num1,num2;


    printf("整数A:");scanf("%d",&num1);
    printf("整数B:");scanf("%d",&num2);

    if(num1 % num2)
        puts("BはAの約数ではありません");
    else
        puts("BはAの約数です");

    return 0;
}
