#include<stdio.h>
int main(){
    float costPrice,sellingPrice,profitloss;
    scanf("%f %f %f", &costPrice, &sellingPrice, &profitloss);
    if(profitloss > 0){
        printf("Profit");
    }else if(profitloss < 0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}