#include<stdio.h>



int main(void){
    int count=0;
for(float i=0.0;i<=1.0;i +=0.01){
     count++;
     int a =i*100;
     float x=a/100.0;
     printf("実行回数:%d\n",count-1);
     printf("x=%f x=%f\n",i,x);
    }
   
 
    return 0;
}