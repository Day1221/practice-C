#include<stdio.h>

void null_string(char s[]){
    s[0]='\0';
}



int main(void){

    char str[128];

    printf("文字列を入力してください:");scanf("%s",str);
    printf("変換前の文字列は\"%s\"です\n",str);
    null_string(str);
    printf("変換後の文字列は\"%s\"です",str);

    return 0;
}