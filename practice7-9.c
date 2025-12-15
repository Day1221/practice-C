#include<stdio.h>
#include<math.h>

double squer_area(double x){
    return sqrt(x);
}

int main(void){
    double a;
    printf("正方形の辺を入力:");scanf("%lf",&a);

    printf("面積は%fです",squer_area(a));
    return 0;
}