#include<stdio.h>

int combination(int n,int r){

    if(r==0||r==n){
        return 1;
    }
    else{
        return (combination(n-1,r-1)+combination(n-1,r));
    }
}



int main(void){

    int num1;
    int num2;

    printf("整数を入力してください:");scanf("%d",&num1);
    printf("整数を入力してください:");scanf("%d",&num2);
    long nCr=combination(num1,num2);
    printf("%dC%d=%ld",num1,num2,nCr);

    return 0;
}