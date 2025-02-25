#include<stdio.h>
int main(){
    char marks ;
    scanf("%c",&marks);
    if( char 'A'){
        printf("Excellent");
    }else if(char 'B'){
        printf("Good");
    }else if(char'C'){
        printf("Average");
    }else if(char'D'){
        printf("Below Average");
    }else if(char'F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}