#include<stdio.h>

void del_digit(char s[]){
    int i,dix=0;

    while(s[i]){
        if(s[i]<'0'||'9'<s[i]){
            s[dix++]=s[i];
        }
        i++;
    }
    s[dix]='\0';
}


int main(void){

   char str[128];

   printf("文字列を入力:");scanf("%s",str);

   del_digit(str);

   printf("更新後:%s",str);
   return 0;
}