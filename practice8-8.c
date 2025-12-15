#include<stdio.h>

int gcd(int x,int y){

    if(y==0){
      return x;
    }
    else{
        return gcd(y,x%y);
    }
}


int main(void){

    int num1,num2;

    printf("整数を入力してください:");scanf("%d",&num1);
    printf("整数を入力してください:");scanf("%d",&num2);
    printf("最大公約数は%dです",gcd(num1,num2));

    return 0;
}