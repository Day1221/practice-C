#include<stdio.h>

int count_bits(unsigned x){

    int bits=0;
    while (x)
    {
        if(x&1U) bits++;
        x>>=1;
    }
    return bits;
    
}

int int_bits(void){
    return count_bits(~0U);
}

void print_bits(unsigned x){

    for(int i=int_bits()-1;i>=0;i--){
        putchar(((x>>i)&1U) ? '1':'0');
    }
}

int main(void){
    unsigned a,b;


    printf("非負の整数:");scanf("%u",&a);

    putchar('\n');

    printf("整数      ="); print_bits(a);putchar('\n');
    printf("セット    ="); print_bits(a|1U);putchar('\n');
    printf("リセット  ="); print_bits(a&~1U);putchar('\n');
    printf("反転      ="); print_bits(a^1U);putchar('\n');
  
    return 0;
}