#include<stdio.h>
#define strCount 3
#define strlen 128


void put_strary(const char s[][strlen] ,int n){
    for(int i=0;i<n;i++){
        printf("s[%d]=\"%s\"\n",i,s[i]);
    }
}

int main(void){

    char cs[strlen][strlen];
    int count=0;

    while(1){
        
        
        printf("s[%d]=",count);
        scanf("%s",cs[count]);
        
        if(cs[count][0]=='$' && 
           cs[count][1]=='$' && 
           cs[count][2]=='$' && 
           cs[count][3]=='$' && 
           cs[count][4]=='$' &&
           cs[count][5]=='\0'){
            break;
        }
     
        count++;

    
    }
    
       if(count<strCount){
            printf("文字列の数が3個以下です");
            return 1;
        }

    put_strary(cs,count);
    return 0;
}
