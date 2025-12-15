#include<stdio.h>

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
 int count=0;
    for(int i=int_bits()-1;i>=0;i--){
        count++;
        putchar(((x>>i)&1U) ? '1':'0');
    }
    printf("\nビット数:%d",count);
}

int main(void){
    unsigned a,b;


    printf("非負の整数:");scanf("%u",&a);
    printf("シフトするビット数:");scanf("%u",&b);

    putchar('\n');

    printf("整数      ="); print_bits(a);putchar('\n');
    printf("右シフト  ="); print_bits(a>>b);putchar('\n');
    printf("左シフト  ="); print_bits(a<<b);putchar('\n');
  
    return 0;
}