#include<stdio.h>

int main(void){

    float a;
    double b;
    long double c;
    
    printf("float型の変数:");scanf("%f",&a);
    printf("double型の変数:");scanf("%lf",&b);
    printf("long double型の変数:");scanf("%Lf",&c);

    printf("%f\n",a);
    printf("%f\n",b);
    printf("%Lf\n",c);

    return 0;

    
}