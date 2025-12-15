#include<stdio.h>
char *str_char(const char *s,int c){
       
    while(*s!='\0'){
        if(*s == c){
            return (char *)s;
        }
        s++;
    }

    return NULL;
}

int main(void){

    char str[128]="AABBCCDDEEAAABFEIDSWOOO";
    int src_str;
    char *result;
    printf("検索したい文字を入力してください:");scanf("%c",(char*)&src_str);

    result=str_char(str,src_str);


    if(result == NULL){
        printf("文字列%sには%cが含まれていません。",str,(char)src_str);
    }
    else
    {
       printf("文字列%sには%cが含まれています。",str,*result);
    }
    
    return 0;


}