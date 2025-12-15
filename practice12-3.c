#include<stdio.h>

typedef struct student{
    char name[64];
    int height;
    int weight;
} Student;

Student scan_Student(){

    Student info;

    printf("氏名:");scanf("%s",info.name);
    printf("身長:");scanf("%d",&info.height);
    printf("体重:");scanf("%d",&info.weight);
    puts("-----------------------------");
    printf("氏名=%s\n",info.name);
    printf("体重=%d\n",info.weight);
    printf("身長=%d\n",info.height);
};


int main(void){

    scan_Student();

    return 0;
}

