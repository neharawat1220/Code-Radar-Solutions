#include<stdio.h>
int main(){
    int a=5,b=10;
    scanf("%d %d" ,&a, &b);
    if(a>b){
        printf("5");
    }else if(b>a){
        printf("10");
    }else{
        printf("print both");
    }
    return 0;
}