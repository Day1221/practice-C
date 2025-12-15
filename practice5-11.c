#include<stdio.h>

int main(void){

int tensu[6][2];
int sum_subject=0;
int sum_subject_individual_math=0;
int sum_subject_individual_japanese=0;
int sum_graduate_individual=0;
int sum_graduate=0;

puts("点数入力\n");
for(int i=0;i<6;i++){
        printf("%d番(数学):",i+1);
        scanf("%d",&tensu[i][0]);
        printf("%d番(国語):",i+1);
        scanf("%d",&tensu[i][1]);  
}
puts("\n学生ごとの合計点\n");

for(int i=0;i<6;i++){
    for(int j=0;j<2;j++){
        sum_graduate_individual=tensu[i][0]+tensu[i][1];
        sum_graduate+=tensu[i][j];
      }
    printf("%d番:%d点\n",i+1,sum_graduate_individual);

}
printf("学年の平均点:%f",(double)sum_graduate/6);

puts("\n-------------------------------------");
puts("\n科目ごとの合計点\n");

for(int i=0;i<6;i++){
    sum_subject_individual_math+=tensu[i][0];
    sum_subject_individual_japanese+=tensu[i][1];
    sum_subject=sum_subject_individual_japanese+sum_subject_individual_math;
}
printf("数学の合計点は%dです\n",sum_subject_individual_math);
printf("国語の平均点は%dです\n",sum_subject_individual_japanese);
printf("科目の平均点:%f",(double)sum_subject/6);

    return 0;
}