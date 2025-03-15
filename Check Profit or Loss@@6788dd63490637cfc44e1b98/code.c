#include<stdio.h>
int main(){
    int CostPrice,SellingPrice,Profitloss;
    scanf("%d %d %d", &CostPrice, &SellingPrice, &Profitloss);
    if(Profitloss > 0){
        printf("Profit");
    }else if(Profitloss < 0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}