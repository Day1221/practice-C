#include<stdio.h>

int scan_pint(void){

     int tmp;

     do
     {
        printf("正の整数を入力してください:");
        scanf("%d",&tmp);
        if(tmp<=0){
            puts("正の整数意外は入力しないでください。");

        }
     } while (tmp<=0);
     return tmp;
}

int rev_int(int num){
      int tmp=0;
      int count=0;

      if(num>0){
        do
        {
            count++;
            tmp=tmp*10+num % 10;
            printf("pdb_1(%d回目):%d\n",count,tmp);
            num /=10;
            printf("pdb_2(%d回目):%d\n",count,num);
        } while (num >0);
        return tmp;
      }
}

int main(void){
    int nx =scan_pint();

    printf("反転した値は%dです.\n",rev_int(nx));
    return 0;
}
