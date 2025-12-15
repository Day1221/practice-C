#include<stdio.h>

int main(void){

int retry;
do
{
    

    int no;

    do
    {
        printf("正の整数値を入力:");scanf("%d",&no);
        if(no<=0)
            puts("正の整数値を入力してください");
    } while (no<=0);


    for(int i=1;i<=no;i++)
        putchar('*');
    putchar('\n');
    printf("もう一度?【YES‥0/No‥9】:");scanf("%d",&retry);
}while(retry==0);

return 0;
    
}