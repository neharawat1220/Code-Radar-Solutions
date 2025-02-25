#include<stdio.h>
int main(){
    char marks ;
    scanf("%c",&marks);
    if('A'){
        printf("Excellent");
    }else if('B'){
        printf("Good");
    }else if('C'){
        printf("Average");
    }else if('D'){
        printf("Below Average");
    }else if('F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}