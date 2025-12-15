#include<stdio.h>
#include<unistd.h>

int main(void){


    int sum=0;
    int num;
    int tmp_1,tmp_2;
    puts("二つの整数を入力");
    printf("整数a:");scanf("%d",&tmp_1);
    printf("整数b:");scanf("%d",&tmp_2);

  if(tmp_1>tmp_2){
    num=tmp_1;
    do
    {
        sum=sum+num;
        num=num-1;
        printf("num:%d\n",num);
        sleep(1);
    } while (num >=tmp_2);

        printf("%d以上%d以下の全整数の和は%dです\n",tmp_2,tmp_1,sum);
    }else{
         num=tmp_1;
        do
        {
            sum=sum+num;
            num=num+1;
            printf("num:%d\n",num);
        } while (num >=tmp_2);

        printf("%d以上%d以下の全整数の和は%dです\n",tmp_1,tmp_2,sum);
    }


    return 0;
    


}