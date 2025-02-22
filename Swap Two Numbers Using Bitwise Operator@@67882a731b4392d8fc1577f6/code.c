#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d\n",num1);
    printf("%d\n",num2);

    /*Swap two numbers*/
    num1 ^=num2;
    num2 ^=num1;
    num1 ^=num2;

    printf("%d\n",num1);
    printf("%d\n",num2);

    return 0;

}