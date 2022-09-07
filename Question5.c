#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch (n)
    {
        case 1: printf("Good");
        break;
        case 2: printf("Better");
        break;
        case 3: printf("best");
        break;
        default : printf("Invalid");
    }
    
    
    
    return 0;
    }