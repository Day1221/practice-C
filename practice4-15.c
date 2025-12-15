#include<stdio.h>

int main(void){


    int begin_num,end_num,diff;

    printf("何㎝から:");scanf("%d",&begin_num);
    printf("何㎝まで:");scanf("%d",&end_num);
    printf("何㎝ごと:");scanf("%d",&diff);

    for(int i=begin_num;i<=end_num;i+=diff){
        printf("%dcm  %.2fkg\n",i,((double)i-100)*0.9);
    }

    return 0;
}