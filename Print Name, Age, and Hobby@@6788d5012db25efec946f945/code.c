#include<stdio.h>
int main(){
    int Age;
    char Name[100], Hobby[100];
    scanf("%d",&Age);
    scanf("%s %s",&Name,&Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s\n",Hobby);
    return 0;
}