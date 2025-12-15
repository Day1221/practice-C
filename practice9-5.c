#include<stdio.h>

int str_char(const char s[],int c){     
    for(int i=0; s[i]!='\0';i++){
        if(s[i]==c){
            return i;
        }
    }
    return -1;
}
int main(void){


    char search[10];
    int no;

    printf("探索したい文字を入力してください:");scanf("%s",search);

    no=str_char("ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz", search[0]);

    if(no>=0&&no<=25){
        printf("それは大英文字の%d番目です\n",no+1);
    }
    else if(no>=26&&no<=51){
        printf("それは小英文字の%d番目です\n",no-25);
    }else{
        printf("該当する文字は存在しませんでした。\n");
    }
    return 0;
}