#include<stdio.h>

char *my_strcpy(char *dest,const char *source){

    char *tmp=dest;

    while((*dest++ = *source++)!='\0'){
        ;
    }

    return tmp;
}


char *my_strncpy(char *dest,const char *source,size_t n){
    char *tmp=dest;
    size_t i;
   for(i=0;i<n && source[i]!='\0';i++){
        dest[i]=source[i];
   }

   for(;i<n;i++){
      dest[i]='\0';
   }
        
    return tmp;
}

int main(void){

    char s1[10];
    char *x="XXXXXXXXX";

    my_strcpy(s1,x);my_strncpy(s1,"12345",3);printf("s1 = \"%s\"\n",s1);

 return 0;
}

