#include<stdio.h>

void rev_strings(char s[][128],int n){
for(int i=0;i<n;i++){

    int j=0;
    int len=0;

    while(s[i][j]){
        len++;
        j++;
    }

    for(int z=0;z<(len/2);z++){
        int tmp=s[i][z];
        s[i][z]=s[i][len-1-z];
        s[i][len-1-z]=tmp;
    }
 }
}

void put_strary(const char s[][128] ,int n){
    for(int i=0;i<n;i++){
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }
}

int main(void){

    char cs[][128]={"Turbo","NA","DOHC"};

    put_strary(cs,3);
    puts("-------変換後------");
    rev_strings(cs,3);
    put_strary(cs,3);
    return 0;
}