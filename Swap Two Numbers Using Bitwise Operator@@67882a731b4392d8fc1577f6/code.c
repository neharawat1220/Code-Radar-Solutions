#include<stdio.h>
int main(){
    int num1,num2 temp;
    scanf("%d %d", &num1, &num2);
    /*Swap two numbers*/
    temp ^= num1;
    num2 ^= num1;
    num2 ^= temp;

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;

}