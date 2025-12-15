#include<stdio.h>

int main(void){

    int len;
    puts("左上直角二等辺三角形を表示");
    printf("短辺:");scanf("%d",&len);

    for(int i=0 ;i<len;i++){
        for(int j=1;j<=len-i;j++){
            printf("*");
        }
        for(int j=1;j<i;j++){
            printf(" ");
        }
        putchar('\n');
    }

    return 0;
}