#include<stdio.h>

int factorial(int n){

    int multi=1;

    for(int i=1; i<=n; i++){
         multi=multi*i;
    }

    return multi;
}





int main(void){


    int num;
    printf("整数を入力してください:");scanf("%d",&num);
    printf("%dの階乗は%dです",num,factorial(num));

    return 0;
}