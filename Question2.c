#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("Enter the choice: ");
    scanf("%d",&n);
 while(~0){   
    switch (n)
    {
    case 1: printf("Enter the first number: ");
            scanf("%d",&a);
            printf("Enter the second number:");
            scanf("%d",&b);
            printf("The addition of two number is%d",a+b);
        break;
    case 2: printf("\nEnter the first number: ");
            scanf("%d",&a);
            printf("\nEnter the second number:");
            scanf("%d",&b);
            printf("Subtraction of two number is%d",a-b);
        break;
    case 3: printf("Enter the first number: ");
            scanf("%d",&a);
            printf("Enter the second number:");
            scanf("%d",&b);
            printf("Multiplication of two number is %d",a*b);
        break;
    case 4: printf("Enter the first number: ");
            scanf("%d",&a);
            printf("Enter the second number:");
            scanf("%d",&b);
            printf("Division of two number is %d",a/b);
        break;
    case 5: 
          exit(0);
    
    default: printf("Invalid Input!");
    }
}
    return 0;
}