#include<stdio.h>

void put_stringr(const char s[]){

    int i=0;
    while(s[i]){
        i++;
    }

    for(int j=i;j>=0;j--){
        putchar(s[j]);
    }
}

int main(void){

    char string[128];

    printf("文字列を入力:");scanf("%s",string);

    printf("入力した文字は%sです\n",string);
    printf("逆に表示したら");
    put_stringr(string);
    printf("になりました\n",string);

    return 0;
}