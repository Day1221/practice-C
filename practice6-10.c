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

void array_copy(int v1[],const int v2[],int n){

for(int i=0;i<n;i++){
    v1[i]=v2[i];
}

}
int main(void){

    int number;
    printf("配列の要素数を入力してください:");scanf("%d",&number);
    int array1[number];
    int array2[number];

    printf("配列の要素を入力\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d:",i+1);scanf("%d",&array1[i]);
    }

    print_array(array1,"---変換前の配列の要素---\n",number);
    reverse(array1,number);
    array_copy(array2,array1,number);
    print_array(array2,"---変換後の配列の要素---\n",number);
   
    return 0;
}