#include<stdio.h>

int str_chnum(const char s[],int c){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c)
            count++;
    }
    return count;
}

int main(void){

    char string[128];
    char search[10];

    printf("文字列を入力:");scanf("%s",string);
    printf("探したい文字を入力:");scanf("%s",search);

    printf("%sに%sが%d個含まれています",string,search,str_chnum(string,search[0]));
    return 0;
}