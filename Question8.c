#include<stdio.h>
int main(){
    int n,a,b;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n>=0;
    b=-n;
    switch (a)
    {
    case 1:
     printf("The negative no. of given negative no. is %d",b);
        break;
    case 0: printf("The postive no. of given positive no. is %d",b);
    
    }

    return 0;
}