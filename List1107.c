#include<stdio.h>

char *str_copy(char *d,const char *s){

    char *t=d;

    while(*d++=*s++)
        ;
    return t;
}


int main(void){

    char str1[128],str2[128];
    char tmp[128];

    printf("コピーするのは:");scanf("%s",tmp);

    str_copy(str1,str_copy(str2,tmp));

    printf("str1=\"%s\"\n",str1);
    printf("str2=\"%s\"\n",str2);

    return 0;
}