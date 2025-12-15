#include<stdio.h>

#define Number 120

int main(void){
int num;
int tensu[Number];
int bunpu[11]={0};

printf("人数を入力せよ:");

do
{
    scanf("%d",&num);
    if(num<1 || Number<num)
        printf("1~%dで入力せよ",Number);
} while (num<1 || Number<num);

printf("%d人の点数を入力せよ\n",num);

for(int i=0;i<num;i++){
    printf("%2d番 :",i+1);

    do
    {
        scanf("%d",&tensu[i]);
        if(tensu[i]<0 || tensu[i]>100)
            printf("1~100で入力してください :");
   
    } while (tensu[i]<0 || tensu[i]>100);
    bunpu[tensu[i]/10]++;
}

puts("\n---分布グラフ---");
printf("     100:");


for(int j=0;j<bunpu[10];j++)
    putchar('*');
putchar('\n');

for(int i=9;i>=0;i--){
    printf("%3d~%3d:",i*10,i*10+9);
    for(int j=0;j<bunpu[i];j++)
        putchar('*');
    putchar('\n');
}

    return 0;
}