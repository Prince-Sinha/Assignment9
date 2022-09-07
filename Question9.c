#include<stdio.h>
int main(){
    int n,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n&1;
    switch (a)
    {
    case 0:
         n++;
        printf("The nearest odd number is %d",n);
        break;
    case 1:
         printf("This is odd number"); 
    default:
        break;
    }



    return 0;
}