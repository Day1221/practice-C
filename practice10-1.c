#include<stdio.h>

void adjust_point(int *n){
    if(*n<0){
        *n=0;
    }else if(100<*n){
        *n=100;
    }
}


int main(void){
    int x=-123;
    int y=456;
    int z=50;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
    adjust_point(&x);
    adjust_point(&y);
    adjust_point(&z);

    puts("-------変更後-------");

    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);

    return 0;


}