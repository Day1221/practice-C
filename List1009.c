#include<stdio.h>

int main(void){

    int a[5]={1,2,3,4,5};
    int *p=&a[2];

    for(int i=-2;i<3;i++){
        printf("&a[%d]=%p  p+%d=%p\n",i,&a[i],i,p+i);
    }

    return 0;
}