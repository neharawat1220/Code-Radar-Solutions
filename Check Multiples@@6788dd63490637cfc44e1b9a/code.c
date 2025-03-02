#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num % 10 == 0 && num % 5 == 0){
        printf("Yes");
    }else if(num % 9 == 0 && num % 3 == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;



}