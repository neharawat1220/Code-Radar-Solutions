#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("Isoscles");
    }else if(a==b ||b==c|| c==a){
        printf("Eqilateral");
    }else{
        printf("Scalene");
    }
    return 0;

}