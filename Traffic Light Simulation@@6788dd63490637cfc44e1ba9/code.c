#include<stdio.h>
int main(){
    int color,R,G,Y;
    scanf("%d %d %d %d",&color,&R,&G,&Y);
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