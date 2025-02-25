#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(is_prime(num)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}