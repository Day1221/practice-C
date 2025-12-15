#include<stdio.h>




int my_strcmp(const char *s1, const char *s2){

    while(*s1==*s2){
        if(*s1=='\0'){
            return 0;
        }

        *s1++;
        *s2++;
    }
    
    return *s1-*s2;
 
}


int my_strncmp(const char *s1, const char *s2,size_t n){

 size_t i=0;

 while((*s1==*s2)&& i<n){
    if(*s1=='\0'){
        return 0;
    }
    s1++;
    s2++;
    i++;
 }

    if(i==n){
        return 0;
    }
 return *s1-*s2;

}



int main(void){

    printf("A=%d\n",'A');
    printf("X=%d\n",'X');
    printf("a=%d\n",'a');
    printf("x=%d\n",'x');
    printf("null=%d\n",'\0');
    printf("0=%d\n",'0');
    printf("1=%d\n",'1');
    printf("2=%d\n",'2');
    printf("3=%d\n",'3');
    printf("4=%d\n",'4');
    printf("5=%d\n",'5');
    printf("6=%d\n",'6');
    printf("7=%d\n",'7');
    printf("8=%d\n",'8');
    printf("9=%d\n",'9');

    printf("A-X=%d\n",'A'-'X');
    printf("a-x=%d\n",'a'-'x');
    printf("null-B=%d\n",'\0'-'B');

    printf("strcmp(\"ABCDE\",\"ABCDE\")=%d\n",my_strcmp("ABCDE","ABCDE"));
    
    printf("strcmp(\"ABCDE\",\"ABD\")=%d\n",my_strncmp("ABCDE","ABD",3));
    

    return 0;
}