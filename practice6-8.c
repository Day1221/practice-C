#include<stdio.h>

int min_of(const int v[],int n){

    int min=v[0];

    for(int i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    return min;
}

int main(void){
    int number;
    printf("配列の要素数を入力してください:");scanf("%d",&number);
    int array[number];

    printf("配列の要素を入力\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d:",i+1);scanf("%d",&array[i]);
    }

    printf("配列の最小値は%dです。",min_of(array,number));
    return 0;
    
}