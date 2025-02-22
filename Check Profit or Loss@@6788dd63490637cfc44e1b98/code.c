#include<stdio.h>
int main(){
    int costPrice,sellingPrice,profitloss;
    scanf("%d %d %d",&costPrice,&sellingPrice,&profitloss);
    if(profitloss>0){
        printf("Profit");
    }else if(profitloss<0){
        printf("Loss");
    }else{
        printf("No Loss");
    }
    return 0;
}