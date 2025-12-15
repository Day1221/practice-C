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
for(int j=0;j<10;j++){
    printf("\n%d点~%d点:%d",j*10,j*10+9,bunpu[j]);
}
puts("\n---分布グラフ-----------------------");
int bunpu_max = bunpu[0];
for(int i = 0; i < 11; i++) {
    if (bunpu_max<bunpu[i]) {
        bunpu_max = bunpu[i];
    }
}


for(int i=1;i<=bunpu_max;i++){

    for(int j=0;j<11;j++){
        if(bunpu_max-bunpu[j]>=i){
        printf("   ");
    }
        else{
        printf("  *");
        }
  }
    putchar('\n');
}

printf("-------------------------------------\n");
for(int i=0;i<11;i++){
    printf("%3d",i*10);
}
    return 0;
}