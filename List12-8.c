#include<stdio.h>
#include<math.h>

#define sqr(n) ((n)*(n))


typedef struct {
    double x;
    double y;
} Point;

double distance_of(Point p1, Point p2){

    return sqrt(sqr(p1.x-p2.x)+sqr(p1.y-p2.y));

}


int main(void){


    Point crnt, dest;

    printf("現在のX座標:");scanf("%lf",&crnt.x);
    printf("      Y座標:");scanf("%lf",&crnt.y);
    
    printf("目的地のX座標:");scanf("%lf",&dest.x);
    printf("        Y座標:");scanf("%lf",&dest.y);

    printf("目的地までの距離は%.2fです",distance_of(crnt,dest));

    return 0;

}