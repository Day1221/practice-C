#include<stdio.h>
#include<string.h>



void swap_height(double* x,double* y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void swap_name(char *sx,char *sy){
    char name_tmp[100];

    strcpy(name_tmp,sx);
    strcpy(sx,sy);
    strcpy(sy,name_tmp);
}

void sort(double num[],char name[][100],int n){

    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(num[j-1]>num[j]){
                swap_height(&num[j-1],&num[j]);
                swap_name(name[j-1],name[j]);
            }

        }
    }
}








int main(void){

    FILE *fp;

    fp=fopen("hw.txt","r");

    if(fp == NULL){
        printf("ファイルを開けませんでした\n");
    }else{
        int ninzu=0;
        char name[100][100];
        double height[100];
        double weight[100];
        double hsum=0.0;
        double wsum=0.0;

        while(fscanf(fp,"%s%lf%lf",name[ninzu],&height[ninzu],&weight[ninzu]) == 3){
            hsum +=height[ninzu];
            wsum +=weight[ninzu];
            printf("%-10s %5.1f %5.1f\n",name[ninzu],height[ninzu],weight[ninzu]);
            ninzu++;
        }
        printf("----------------------\n");
        printf("平均       %5.1f %5.1f\n",hsum/ninzu,wsum/ninzu);


        printf("身長順にソートします\n");
        sort(height,name,ninzu);

        for(int i=0;i<ninzu;i++){
        printf("%-10s %5.1f %5.1f\n",name[i],height[i],weight[i]);
        }
        printf("----------------------\n");
        printf("平均       %5.1f %5.1f\n",hsum/ninzu,wsum/ninzu);
        fclose(fp);
    }

    return 0;
}