#include<stdio.h>


int main(void){

int input1[4][3];
int input2[3][4];
int sum[3][3]={0};


puts("input1に値を入力\n");
for(int i=0;i<4;i++){
    for (int j=0;j<3; j++){
        printf("input1[%d][%d]:",i,j);
        scanf("%d",&input1[i][j]);
    }
    
}

puts("input2に値を入力\n");
for(int i=0;i<3;i++){
    for (int j=0;j<4; j++){
        printf("input2[%d][%d]:",i,j);
        scanf("%d",&input2[i][j]);
    }
    
}

for(int i=0;i<4;i++){
    for (int j=0;j<3; j++){
        for(int k=0;k<3;k++){
           sum[i][j] +=input1[i][k]*input2[k][j];
        }
    }   
}
puts("行列の積\n");
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++)
    {
    printf("%4d",sum[i][j]);
    }
    putchar('\n');
}
    return 0;
}