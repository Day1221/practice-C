#include<stdio.h>

int str_length(const char *s){

    int len=0;

    while (*s++)
        len++;
    return len;
}

int main(void){

    char s[128];

    printf("文字列を入力してください:");scanf("%s",s);

    printf("文字列\"%s\"の長さは%dです",s,str_length(s));

    return 0;
}