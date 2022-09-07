#include<stdio.h>
int main(){
    int n;
    printf("Enter the Day number of week: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("Today is Monday");
        break;
    case 2: printf("It's Tuesday");
        break;
    case 3: printf("Hello Wednesday");
        break;
    case 4: printf("Thirsty Thuesday");
        break;
    case 5: printf("Today is Firday");
        break;
    case 6: printf("It's Saturday");
        break;
    case 7: printf("Enjoy Holiday");
        break;
    default:printf("Invalid Input!");
    }
    return 0;
}