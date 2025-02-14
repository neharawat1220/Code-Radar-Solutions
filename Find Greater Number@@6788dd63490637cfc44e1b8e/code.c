#include<stdio.h>
int main(){
    int a=5,b=10;
    scanf("%d %d" ,&a, &b);
    if(a>b){
        printf(" %d\n",a);
    }else if(b>a){
        printf(" %d\n",b);
    }else{
        printf(" both greater");
    }
    return 0;
}