#include <stdio.h>
int main(void)
{
    int a,b;
    puts("二つの整数を入力してください");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);

    int max,min;
    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }

    printf("大きなのほうの数字は%dです \n",max);
    printf("小さなのほうの数字は%dです \n",min);

    return 0;
}