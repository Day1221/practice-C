#include <stdio.h>
void main()
{
    int a,b,c,d;
    puts("二つの整数を入力してください");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("整数b:"); scanf("%d",&c);
    printf("整数b:"); scanf("%d",&d);
   
   int max=a > b ? a : b;
       max=b > c ? b : c;
       max=c > d ? c : d;
   printf("大きいほうの値は%dです",max);
}