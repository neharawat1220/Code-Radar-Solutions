#include<stdio.h>
int main(){
    char color;
    scanf("%c", &color);
    if((color =='R') &&(color =='r')){
        printf("Stop");
    }else if((color =='G')&&(color =='g')){
        printf("Go");
    }else if((color =='Y')&&(color =='y')){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
    return 0;
}