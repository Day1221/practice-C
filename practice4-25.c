#include<stdio.h>


int number_dots(int n){
    return ((n-1)*2+1);
}

int main(void){

    puts("ピラミッドを作ります");
    int len;

    printf("何段ですか:");scanf("%d",&len);

    for(int i=len; i>=1 ;i--){

        for(int j=1;j<=len-i;j++){
            printf(" ");
        }
        for(int j=1;j<=number_dots(i);j++){
            printf("%d",len-i+1);
        }
        putchar('\n');

    }

    return 0;
}