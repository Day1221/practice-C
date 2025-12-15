#include<stdio.h>
#include<string.h>

int main(void){

    char str[128];

    printf("文字列:");scanf("%s",str);

    printf("文字列%sの長さは%dです",str,strlen(str));

    return 0;
}