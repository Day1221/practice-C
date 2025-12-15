#include<stdio.h>

void print_sign(void);

void print_sign(void){
    printf("*\n");
           
}


int main(void){


    int num;

    printf("整数を入力:");scanf("%d",&num);


    while(num-- >0)
        print_sign();

    return 0;

}