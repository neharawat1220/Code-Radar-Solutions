#include<stdio.h>
int main(){
    int a,b,;
    scanf(" %d %d %d",&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);

    a^ = b;
    b^ = a;
    a^ = b;
    printf("a after swapping=%d\n",a);
    printf("b after swapping=%d\n",b);
    return 0;


}