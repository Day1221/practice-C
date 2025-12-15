#include<stdio.h>

int main(void){


    int retry;
    do
    {
        int tmp;
        printf("整数値:");scanf("%d",&tmp);

        if(tmp>0){
            puts("整数値は正です");
        }
        else{
            puts("整数値は負です");
        }

        printf("続ける? <YES‥0/No‥1>");scanf("%d",&retry);
    } while (retry ==0);

    return 0;
    
}