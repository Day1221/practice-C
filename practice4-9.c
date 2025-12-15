#include<stdio.h>

void print_sign(int num);

void print_sign(int num){
           
        if((num%2)==0){
            putchar('+');
        }else{
            putchar('-');
        }
}


int main(void){


    int num;

    printf("整数を入力:");scanf("%d",&num);


    while(num-- >0)
        print_sign(num);

    return 0;

}