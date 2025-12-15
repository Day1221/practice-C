#include<stdio.h>

int main(void){


    int month;

    printf("何月ですか:");scanf("%d",&month);

    if(month >=3 && month <= 5){
        printf("%d月は春です",month);
    }else if(month >=6 && month <=8){
        printf("%d月は夏です",month);
    }else if(month >= 9 && month <=11){
        printf("%d月は秋です",month);
    }else if( month==1 || month==12 || month==2){
        printf("%d月は冬です",month);
    }else{
        printf("そのような月はありません");
    }


    return 0;
}