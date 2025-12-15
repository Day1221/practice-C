#include <stdio.h>

int main(void){
    
    int n;

    printf("整数を入力:");scanf("%d",&n);

    if(n%5)
        puts("その整数は5で割り切れません");

    return 0;
}