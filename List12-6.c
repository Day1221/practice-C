#include<stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};


struct xyz xyz_of(int x, long y, double z){
    struct xyz temp;

    temp.x=x;
    temp.y=y;
    temp.z=z;

    return temp;
}

int main(void){

    struct xyz s;

    s=xyz_of(12, 765432, 35.689);

    printf("xyz.x=%d\n",s.x);
    printf("xyz.y=%ld\n",s.y);
    printf("xyz.z=%lf\n",s.z);

    return 0;

}
