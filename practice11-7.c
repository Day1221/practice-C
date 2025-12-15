#include<stdio.h>


void put_string(const char *s){

    while(*s!='\0'){
       printf("%c",*s);
       s++;
    }
}


int main(void){

    
    char str[128];

    printf("文字列を入力してください:");scanf("%s",str);
    printf("入力した文字は");
    put_string(str);
    printf("です。");

    return 0;


}