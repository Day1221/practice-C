#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

enum select_mode {wegiht,height};

typedef struct{
    char name[NAME_LEN];
    int height;
    double weight;
} Student;

enum select_mode select(){
    int tmp;
    printf("どちらでソートしますか? 0--weight 1--height:");scanf("%d",&tmp);
    return tmp;
}

void swap_Student(Student *x,Student *y){
    Student temp =*x;
    *x=*y;
    *y=temp;
}

void sort_by_height(Student a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j-1].height>a[j].height){
                swap_Student(&a[j-1],&a[j]);
            }
        }
    }
}
void sort_by_weight(Student a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j-1].weight>a[j].weight){
                swap_Student(&a[j-1],&a[j]);
            }
        }
    }
}


int main(void){

    Student std[NUMBER]={{"",0,0.0}};
    enum select_mode selected;

        for(int i=0;i<NUMBER;i++){
            printf("%d人目\n",i+1);
            printf("氏名:"); scanf("%s",std[i].name);
            printf("身長:"); scanf("%d",&std[i].height);
            printf("体重:"); scanf("%lf",&std[i].weight);
        }


    for(int i=0;i<NUMBER;i++){
        printf("%-8s %6d%6.1f\n",std[i].name,std[i].height,std[i].weight);
    }

    switch(selected=select()){
        case wegiht:
            sort_by_weight(std,NUMBER);
            puts("\n体重順にソートしました");
  
            for(int i=0;i<NUMBER;i++){
                printf("%-8s %6d%6.1f\n",std[i].name,std[i].height,std[i].weight);
            }
        break;

        case height:
            sort_by_height(std,NUMBER);
            puts("\n身長順にソートしました");
  
            for(int i=0;i<NUMBER;i++){
                printf("%-8s %6d%6.1f\n",std[i].name,std[i].height,std[i].weight);
            }
        break;


    }

    return 0;

}