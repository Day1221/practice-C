#include<stdio.h>
#define NUMBER 5

int max(int v[], int n){

    int max=v[0];

    for(int i=0 ; i<n;i++){
        if(v[i]>max)
            max=v[i];
    }
    return max;
}

int main(void){

    int eng[NUMBER];
    int mat[NUMBER];

    printf("5人の点数を入力せよ\n");
    for(int i=0;i<NUMBER;i++){
        printf("[%d] 英語:",i+1); scanf("%d",&eng[i]);
        printf("    数学:");     scanf("%d",&mat[i]);
    }
    int max_e=max(eng,NUMBER);
    int max_m=max(mat,NUMBER);

    printf("英語の最高点=%d\n",max_e);
    printf("数学の最高点=%d\n",max_m);

    return 0;
}