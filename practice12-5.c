#include<stdio.h>
#include<math.h>

#define sqr(n) ((n)*(n))

typedef struct{
    double x;
    double y;
} Point;

typedef struct{
    Point pt;
    double feul;

} Car;

double distance_of(Point p1,Point p2){
    return sqrt(sqr(p1.x-p2.x)+sqr(p1.y-p2.y));
}

void put_info(Car c){
    printf("現在位置:(%.2f,%.2f)\n",c.pt.x,c.pt.y);
    printf("残り燃料:%.2fリットル\n",c.feul);
}


int move_crdnt(Car *c,Point dest){
    double d=distance_of(c->pt,dest);
    if(d> c->feul){
        return 0;
    }

    c->pt=dest;
    c->feul -= d;

    return 1;
}

int move_distance(Car *c,Point dest){
    double d=distance_of(c->pt,dest);
    if(d> c->feul){
        return 0;
    }

    c->pt.x += dest.x;
    c->pt.y += dest.y;
    c->feul -= d;

    return 1;
}

int main(void){

    Car mycar={{0.0,0.0},90.0};
while(1){
    int select;
    int select_mode_move;
    Point dest;
    put_info(mycar);

    printf("移動しますか?【Yes--1/No--0】:");scanf("%d",&select);
    if(select != 1){
        break;
    }
    
    printf("移動距離の方法を指定【座標系--1/移動距離--0】:");scanf("%d",&select_mode_move);
    if(select_mode_move == 1){
        printf("現在地のX座標:");scanf("%lf",&dest.x);
        printf("        Y座標:");scanf("%lf",&dest.y);

        if(!move_crdnt(&mycar,dest)){
            puts("燃料不足で移動できません");
        }
    }else{
        printf("現在地のX座標:");scanf("%lf",&dest.x);
        printf("        Y座標:");scanf("%lf",&dest.y);

        if(!move_distance(&mycar,dest)){
            puts("燃料不足で移動できません");
        }

    }
}

return 0;

}