#include<stdio.h>

int main(void){

    char s[]="ABC";
    printf("変換前:%s\n",s);
    s[0]='\0';
    printf("変換後:%s",s);

    return 0;
}