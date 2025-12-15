#include<stdio.h>

#define strCount(x) {if(x>3){printf("\n");}else {printf("\n文字列の数が3以下です.\n"); return 0;}}

int main(void){

    char s[128][128];
    int count=0;


    for(int i=0;;i++){
        count++;
        printf("s[%d]=",i);
        scanf("%s",s[i]);
        if(s[i][0]=='$' && 
           s[i][1]=='$' && 
           s[i][2]=='$' && 
           s[i][3]=='$' && 
           s[i][4]=='$' &&
           s[i][5]=='\0'){
            break;
        }
    }
    strCount(count);
    for(int i=0;i<count-1;i++){
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }

    return 0;
}