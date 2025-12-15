#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

void swap_int(int* x,int* y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void swap_str(char* sx,char* sy){

    char tmp[NAME_LEN];

    strcpy(tmp,sx);
    strcpy(sx,sy);
    strcpy(sy,tmp);

}

void sort(int num[],char str[][NAME_LEN],int n){

    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>0;j--){
            if(num[j-1]>num[j]){
                swap_int(&num[j-1],&num[j]);
                swap_str( str[j-1],str[j]);
            }
        }
    }

}
    int main(void){

        int height[]={178,175,173,165,179};
        char name[][NAME_LEN]={"Sato","Sanaka","Takao","Mike","Masaki"};

        for(int i=0;i<NUMBER;i++){
            printf("%2d : %-8s%4d\n",i+1,name[i],height[i]);
        }

        sort(height,name,NUMBER);

        puts("身長順にソートしました。");
        for(int i=0;i<NUMBER;i++){
            printf("%2d : %-8s%4d\n",i+1,name[i],height[i]);
        }

        return 0;
    }


