#include<stdio.h>

int str_string(const char s[]){

    int len=0;
    while (s[len])
    {
        len++;
    }
    return len;
}

void rev_string(char s[]){

    int len=str_string(s);
    for(int i=0;i<(len/2);i++){
        int tmp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=tmp;
    }
}


int main(void){

    char string[128];
    int len_string=0;
    printf("文字列を入力:");scanf("%s",string);

    rev_string(string);

    puts("逆にしました");

    printf("文字列:");puts(string);

    return 0;
}