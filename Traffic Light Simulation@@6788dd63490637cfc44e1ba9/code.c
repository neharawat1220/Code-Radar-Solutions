#include<stdio.h>
int main(){
    char color;
    scanf("%c", &color);
    switch (color){
        case 'R':
        case 'r':
            printf("Stop\n");
            break;
        case 'G':
        case 'g':
            printf("Go\n");
            break;
        case 'Y':
        case 'y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
        }
    
    
    return 0;
}