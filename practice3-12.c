#include<stdio.h>

int main(void){


    int num;

    printf("整数:");scanf("%d",&num);

    switch(num % 2){
        case 0 : puts("その数は偶数です");break;
        default : puts("その数は奇数です");break;

    }

    return 0;
}