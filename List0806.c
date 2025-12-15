#include<stdio.h>

enum animal {Dog,Cat,Monkey,Invaild};


void dog(void){
    puts("ワンワン!!");
}

void cat(void){
    puts("ニャー");
}

void monkey(void){
    puts("キっキっ!!");
}

enum animal select(void){
    int tmp;

    do{
        printf("0‥犬  1‥猫  2‥サル 3‥終了:");scanf("%d",&tmp);
    }while (tmp < Dog || tmp > Invaild);
    return tmp;
    
}


int main(void){
    enum animal selected;

    do
    {
        switch (selected = select())
        {
        case Dog :dog(); break;
        case Cat :cat(); break;
        case Monkey :monkey(); break;
        
        }
    } while (selected != Invaild);
    
    return 0;
}