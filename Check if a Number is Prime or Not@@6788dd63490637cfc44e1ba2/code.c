#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if((num <= 1 && num % 1 && num)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}