#include<stdio.h>

void del_digit(char *s){
    char *tmp=s;
    while(*s!='\0'){
        if(*s<'0' || '9'<*s){
            *tmp++=*s;  
        }
        s++;
        }
*tmp='\0';
}

int main(void){

   char str[128];

   printf("文字列を入力:");scanf("%s",str);

   del_digit(str);

   printf("更新後:%s",str);
   return 0;
}