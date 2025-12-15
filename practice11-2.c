#include<stdio.h>

int main(void){

    char s[][5]={"LISP","C","Ada"};
    char *p[]={"Paul","X","MAC"};

    for(int i=0;i<(sizeof(s)/5);i++){
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }

 
    for(int i=0;i<(sizeof(p)/8);i++){
        printf("p[%d]=\"%s\"\n",i,p[i]);
    }

    return 0;

}