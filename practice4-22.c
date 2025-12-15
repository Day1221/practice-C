#include<stdio.h>

int main(void){

    puts("長方形を作ります");
    int height;
    int width;

    printf("一辺(縦):");scanf("%d",&height);
    printf("一辺(横):");scanf("%d",&width);

    for(int i=1;i<=width;i++){
        for(int j=1;j<=height;j++){
            printf("*");
        }
        putchar('\n');

    }

    return 0;
}