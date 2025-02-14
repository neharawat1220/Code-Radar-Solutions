#include<stdio.h>
int main(){
    int a=5,b=10;
    scanf("%d %d" ,&a, &b);
    if(a>b){
        printf("a is greater: %d\n",a);
    }else if(b>a){
        printf("b is greater: %d\n",b);
    }else{
        printf(" both greater");
    }
    return 0;
}