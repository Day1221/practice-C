#include<stdio.h>

int main(void){

int a[4]={1868,1912,192,1989};

int b[]={1,2,3};

int c[5]={1,2};


int d[5]={0};

for(int i=0;i<4;i++)
    printf("a[%d]=%d\n",i,a[i]);
    printf("\n");
for(int i=0;i<3;i++)
    printf("b[%d]=%d\n",i,b[i]);
    printf("\n");
for(int i=0;i<5;i++)
    printf("c[%d]=%d\n",i,c[i]);
    printf("\n");
for(int i=0;i<5;i++)
    printf("d[%d]=%d\n",i,d[i]);
    printf("\n");

    return 0;
}