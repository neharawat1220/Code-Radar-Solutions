#include<stdio.h>
int main(){
    int a, b, temp;
    printf("%d %d\n", a, b);
    //swap
    temp = a;
    a = b;
    b = temp;

    printf("%d %d\n" ,a, b);
    return 0;
}      