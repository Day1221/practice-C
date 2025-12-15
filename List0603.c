#include<stdio.h>

int sqr(int a){

    return a*a;
}

int diff(int a, int b){

    return a>b ? a-b:b-a;
}


int main(void){

    int a,b;

    puts("二つの整数を入力してください");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);

    printf("整数aと整数bの２乗の差は%dです",diff(sqr(a),sqr(b)));

}