#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",a,b);
    if(a>b){
        printf("Positive");
    }else if(a<b){
        printf("Negative");
    }else{
        printf("Zero");
    }
    return 0;
}