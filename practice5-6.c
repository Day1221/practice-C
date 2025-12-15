#include<stdio.h>

#define NUMBER 120

int main(void){

int num;
int data_num[NUMBER]={0};


printf("データ数:");
do
{
scanf("%d",&num);
}while (num<1 || num>NUMBER);


for(int i=0;i<num;i++){
    printf("%2d番:",i+1);
    scanf("%d",&data_num[i]);
    

}
printf("{");
int j;
    for(j=0;j<num;j++)
        if(j==num-1)
            { printf("%d",data_num[j]);}
        else{
            printf("%d, ",data_num[j]);
            }

printf("}");
    return 0;
}