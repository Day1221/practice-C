#include<stdio.h>

int main(void){

    int no;
    int sum=0;
    printf("noの値:");scanf("%d",&no);

    for(int i=1;i<=no;i++){
        sum +=i;
    }

    printf("1から%dまでの値は%dです",no,sum);

    return 0;
}