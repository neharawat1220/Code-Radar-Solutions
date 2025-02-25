#include<stdio.h>
int main(){
    int color;
    scanf("%d",&color);
    if(color =='R'){
        printf("Stop");
    }else if((color =='G') && (color =='g')){
        printf("Go");
    }else if((color =='Y') && (color =='y')){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
    return 0;
}