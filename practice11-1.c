#include<stdio.h>

int main(void){

    char *p="123";

    printf("s=\"%s\"\n",p);

    p="456"+1;

    printf("s=\"%s\"\n",p);    
    return 0;
}