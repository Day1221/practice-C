#include<stdio.h>

int day[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                {0,31,29,31,30,31,30,31,31,30,31,30,31}
            };

int isleap(int year)
{
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}


void increment_date(int *y,int *m,int *d){
   if(*d!=day[isleap(*y)][*m]){
       (*d)++;
   }else{
    if(*m!=12){
        (*m)++;
    }else{
        (*y)++;
        *m=1;
    }
    *d=1;
   }
}

void decrement_date(int *y,int *m,int *d){

    if(*d!=1){
        (*d)--;
    }else{
        if(*m!=1){
            (*m)--;

        }else{
            (*y)--;
            *m=12;
        }
        *d=day[isleap(*y)][*m];
    }

}


int main(void){

    int year,month,day;
    int sw;

    puts("西暦,月,日を入力");

    printf("西暦:");scanf("%d",&year);
    printf("月:");scanf("%d",&month);
    printf("日:");scanf("%d",&day);
    printf("現在の日付は%d年%d月%d日です\n",year,month,day);


    printf("[前の日に更新]::0 [次の日の日付に更新]::1……");scanf("%d",&sw);

    if(sw==0){
        decrement_date(&year,&month,&day);
    }else{
        increment_date(&year,&month,&day);
    }

    printf("日付は%d年%d月%d日です",year,month,day);

    return 0;
}