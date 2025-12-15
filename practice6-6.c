#include<stdio.h>

void hushinsya_discover(int n){
while (n-- >0)
{
    printf("変態!!!");
}
}



int main(void){

    int time;

    printf("不審者が現れました。\n");
    printf("必死さ[1~10までの数字]:");scanf("%d",&time);
    hushinsya_discover(time);

    return 0;
}