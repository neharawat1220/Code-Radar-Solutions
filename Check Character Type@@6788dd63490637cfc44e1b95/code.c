#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u'){
        printf("Vowel",ch);
    }else if(ch>='a' && ch <='z'){
        printf("Constant",ch);
    }else if(ch>='0' && ch<='9'){
        printf("Digit",ch);
    }else{
        printf("Special Charater ");
    }
    return 0;
}