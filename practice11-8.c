#include<stdio.h>
int str_chnum(const char *s ,int ch){
    size_t str_count=0;
    while(*s!='\0'){
        if(*s==ch){
            str_count++;
        }
        s++;
    }

    return str_count;
}





int main(void){

    char str[128]="AABBCCDDEEAAABFEIDSWOOO";
    int src_str;
    printf("検索したい文字を入力してください:");scanf("%c",(char*)&src_str);

    printf("文字列%sには%cが%d個含まれています。",str,(char)src_str,str_chnum(str,src_str));

    return 0;


}