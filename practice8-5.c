#include<stdio.h>

enum season{Spring,Summer,Autume,Winter,Invaild};

void spring(void){
    puts("桜が咲きました");
}


void summer(void){
    puts("花火が上がります");
}


void autume(void){
    puts("紅葉狩りです");
}

void winter(void){
    puts("雪が降りました");
}

enum season select(void){
    int tmp;

    do
    {
       printf("0‥春  1‥夏  2‥秋  3‥冬  4‥終了");
       scanf("%d",&tmp);
    } while (tmp <Spring || Invaild <tmp);
    return tmp;
}

int main(void){

    enum season selected;

    do
    {
        switch (selected = select())
        {
        case Spring : spring(); break;
        case Summer : summer(); break;
        case Autume : autume(); break;
        case Winter : winter(); break;
        }
    } while (selected != Invaild);
    return 0;
    
}