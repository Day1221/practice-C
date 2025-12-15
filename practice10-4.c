#include<stdio.h>

void set_idx(int *v, int n){

    for(int i=0;i<n;i++){
        v[i]=i;
    }
}


int main(void){

    int a[]={0};
    set_idx(a,8);

    for(int i=0;i<8;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}