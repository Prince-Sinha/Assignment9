#include<stdio.h>
int main(){
    int a,r;
    printf("Enter the year: ");
    scanf("%d",&a);
    r=((a%4==0 && a%100!=0) || a%400==0);
    switch (r)
    {
    case 1:
        printf("It is a leap year");
        break;
    case 0:printf("It is not a leap year");
   
    }

    return 0;
}