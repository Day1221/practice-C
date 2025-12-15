#include<stdio.h>
#include<string.h>

struct xyz{
    int x;
    long y;
    double z;
};

struct xyz scan_xyz(){
    struct xyz num;

    printf("x:");scanf("%d",&num.x);
    printf("y:");scanf("%ld",&num.y);
    printf("z:");scanf("%lf",&num.z);
    puts("---------------------------------");
    printf("x=%d\n",num.x);
    printf("y=%ld\n",num.y);
    printf("z=%lf\n",num.z);
}


int main(void){

    scan_xyz();

    return 0;
}


