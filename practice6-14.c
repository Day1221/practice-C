#include<stdio.h>

 

int main(void){
    static double a[10];

    for(int i=0;i<10;i++){
        printf("a[%d]=%f\n",i,a[i]);
    }
    return 0;
}