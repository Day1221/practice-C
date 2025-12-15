#include<stdio.h>

int main(void){


    unsigned x;
    unsigned y;
    unsigned z;
    unsigned shift_move_number_right;
    unsigned shift_move_number_left;
    unsigned divided_num;
    unsigned shifted_right_num;
    unsigned shifted_left_num;
    unsigned multing_num;



    puts("---右へnビットシフトした値と除算の値が等しいことの確認---");
    printf("整数を入力:");scanf("%u",&x);
    printf("シフト量を入力:"); scanf("%u",&shift_move_number_right);
    z=1;
    for (int i = 0; i < shift_move_number_right; i++)
    {
        z=z*2;
    }
    
    divided_num = (x/z);
    printf("%d\n",divided_num);
    shifted_right_num = x >> shift_move_number_right;
    printf("%d\n",shifted_right_num);
    if(divided_num == shifted_right_num){
        printf("値は等しいです。\n");
    }
      
    else{
        printf("値は等しくありません。");
        
        return 0;
    }

    puts("---左へnビットシフトした値と乗算の値が等しいことの確認---");
    printf("整数を入力:");scanf("%u",&x);
    printf("シフト量を入力:"); scanf("%u",&shift_move_number_left);

    z=1;
    for (int i = 0; i < shift_move_number_left; i++)
    {
        z=z*2;
    }
    multing_num=(x*z);
    shifted_left_num= x << shift_move_number_left;
    if(multing_num == shifted_left_num)
        printf("値は等しいです。");

    else
        printf("値は等しくありません。");
        return 0;

    return 0;
}