#include<stdio.h>
#include<string.h>

int main(void){

    char s1[10];
    char *x="ABC";


    strcpy(s1,x); strcat(s1,"DEFG"); printf("s1=\"%s\"\n",s1);
    strcpy(s1,x); strncat(s1,"DEFG",1); printf("s1=\"%s\"\n",s1);
    strcpy(s1,x); strncat(s1,"DEFG",2); printf("s1=\"%s\"\n",s1);
    strcpy(s1,x); strncat(s1,"DEFG",3); printf("s1=\"%s\"\n",s1);
    strcpy(s1,x); strncat(s1,"DEFG",4); printf("s1=\"%s\"\n",s1);
    strcpy(s1,x); strncat(s1,"DEFG",5); printf("s1=\"%s\"\n",s1);
    strcpy(s1,x); strncat(s1,"DEFG",7); printf("s1=\"%s\"\n",s1);

    return 0;
}