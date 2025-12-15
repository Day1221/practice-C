#include<stdio.h>

int main(void){

    int ch;
    int line_count=0;

    while((ch=getchar())!=EOF){
        if(ch == '\n'){
            line_count++;
        }

    }
    printf("行数:%d",line_count);
    return 0;
}