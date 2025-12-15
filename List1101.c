#include<stdio.h>

int main(void){

    char str[]="ABC";
    char *ptr="123";

    printf("str = \"%s\"\n",str);
    printf("size_str=%zu\n",sizeof(str));
    printf("ptr=\"%s\"\n",ptr);
    printf("size_ptr=%zu\n",sizeof(ptr));

    return 0;
}