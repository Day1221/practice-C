#include<stdio.h>

double power(double x, int n){
double tmp=1.0;
for(int i=1;i<=n;i++){
    tmp*=x;
}
return tmp;
}


int main(void){

    double a;
    int b;

    puts("aのb乗を求めます。");
    printf("実数a:"); scanf("%lf",&a);
    printf("実数b:"); scanf("%d",&b);

    printf("%.2fの%d乗は%.2fです。",a,b,power(a,b));
    
}