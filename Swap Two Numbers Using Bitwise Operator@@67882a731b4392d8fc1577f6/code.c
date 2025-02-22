#include<stdio.h>
int main(){
    int a,b;
    scanf(" %d %d ",&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);

    a ^= b;
    b ^= a;
    a ^= b;
    printf("%d\n",a);
    printf("%d",b);
    return 0;


}