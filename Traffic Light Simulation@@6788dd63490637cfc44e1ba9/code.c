#include<stdio.h>
int main(){
    char color,R,G,Y;
    scanf("%c %c %c %c",&color,&R,&G,&Y);
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