#include<stdio.h>

void reverse(int v[],int n){

    for (int i = 0; i < n/2; i++)
    {
        int t= v[i];
        v[i]=v[(n-1)-i];
        v[(n-1)-i]=t;
    }
    
}

void print_array(const int v[],char *text,int n){
    printf(text);
    printf("{");
    for (int i = 0; i < n; i++)
    {
       i == n-1 ? printf("%d",v[i]) : printf("%d,",v[i]);
    }
    printf("}\n");
}

int main(void){

    int number;
    printf("配列の要素数を入力してください:");scanf("%d",&number);
    int array[number];

    printf("配列の要素を入力\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d:",i+1);scanf("%d",&array[i]);
    }

    print_array(array,"---変換前の配列の要素---\n",number);
    reverse(array,number);
    print_array(array,"---変換後の配列の要素---\n",number);
   
    return 0;
}