#include<stdio.h>

int main(void){

    float a=123456789012345678901234567890.0;
    double b=123456789012345678901234567890.0;
    long double c=123456789012345678901234567890.0;

    printf("%f\n",a);
    printf("%f\n",b);
    printf("%Lf\n",c);

    return 0;

    
}