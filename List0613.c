#include<stdio.h>

#define NUMBER 5
#define FAILED -1

int serch(const int v[],int key,int n){

    int i=0;

    while (1)
    {
        if(i==n){
            return FAILED;
        }
        if(v[i]==key){
            return i;
        }
        i++;
    }
}

int main(void){
int key,idx;
int x[NUMBER];

for(int i=0;i<NUMBER;i++){
    printf("x[%d]:",i);scanf("%d",&x[i]);
}

printf("探す値:");scanf("%d",&key);

idx=serch(x,key,NUMBER);

if(idx==FAILED){
    puts("探索に失敗しました");
}
else{
    printf("%dは%d番目にあります。",key,idx+1);
}
return 0;

}