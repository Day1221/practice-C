#include<stdio.h>

int main(void){

    char str[][6]={"Turbo","NA","DOHC"};

    for(int i=0;i<3;i++){
        printf("s[%d]=%s\n",i,str[i]);
    }
    return 0;
}