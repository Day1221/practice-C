#include<stdio.h>

void put_stringn(const char s[],int n){
    for(int i=0;i<n;i++)
         printf("%s",s);
}

int main(void){

    char string[128];
    int num;
    printf("表示回数を入力:");scanf("%d",&num);
    printf("文字列を入力:");scanf("%s",string);

    printf("------%sを%d回表示--------\n",string,num);

    put_stringn(string,num);
    return 0;

    
}