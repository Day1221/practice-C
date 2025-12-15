#include<stdio.h>
#define FAILED -1

void print_array(const int v[],int n){
    printf("[");
    for (int i = 0; i < n; i++)
    {
       i == n-1 ? printf("%d",v[i]) : printf("%d,",v[i]);
    }
    printf("]\n");
}


int search_idx(const int v[],int idx[],int key,int n){

  int count=0;
     for(int i=0;i<n;i++){
        if(v[i]==key){
            count++;
            idx[count-1]=i;
        }
     }
     print_array(idx,count);
     return count;
    }

int main(void){

    int key,idx;
    int number;
    printf("配列の要素数を入力してください:");scanf("%d",&number);
    int x[number];
    int y[10]={0};
    

    for(int i=0;i<number;i++){
        printf("x[%d]:",i);scanf("%d",&x[i]);
    }

    printf("探す値:");scanf("%d",&key);
    idx=search_idx(x,y,key,number);

    printf("%dは配列内に%d個あります。",key,idx);

    return 0;
}