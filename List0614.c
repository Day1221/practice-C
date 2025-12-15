#include<stdio.h>

#define NUMBER 5
#define FAILED -1

int serch( int v[],int key,int n){

    int i=0;

    v[n]=key;

    // while (1)
    // {

    //     if(v[i]==key){
    //     break;
    //     }
    //     i++;
    // }
    for(i=0;v[i]!=key;i++);
    return i < n ? i : FAILED;
}

int main(void){
int key,idx;
int x[NUMBER+1];

for(int i=0;i<NUMBER;i++){
    printf("x[%d]:",i);scanf("%d",&x[i]);
}

printf("探す値:");scanf("%d",&key);

if((idx=serch(x,key,NUMBER))==FAILED){
    puts("探索に失敗しました");
}
else{
    printf("%dは%d番目にあります。",key,idx+1);
}
return 0;

}