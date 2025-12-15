#include<stdio.h>

int main(void){

    char s[][5]={"LISP","C","Ada"};
    char *p[]={"Paul","X","MAC"};

    for(int i=0;i<3;i++){
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }

    printf("size_s=%zu\n",sizeof(s));
    for(int i=0;i<3;i++){
        printf("p[%d]=\"%s\"\n",i,p[i]);
    }

     printf("size_p=%zu\n",sizeof(p));

    return 0;

}