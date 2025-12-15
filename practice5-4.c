#include<stdio.h>
#define Number 7

int main(void){

int x[Number];


for(int i=0;i<Number;i++){
    printf("x[%d]: ",i);
    scanf("%d",&x[i]);
}

for(int i=0;i<3;i++){
    int t=x[i];
    x[i]=x[6-i];
    x[6-i]=t;
}

for(int i=0;i<Number;i++){
    printf("x[%d]=%d\n",i,x[i]);

}


    return 0;
}