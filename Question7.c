#include<stdio.h>
int main(){
    float un;
    printf("Enter number of unit used: ");
    scanf("%f",&un);
    switch (un)
    {
        case 1 ... 50: 
        printf("Total electricity bill is %f",n*0.5(1.2));
        break;
        case 51 ... 150:
        printf("Total electricity bill is %f",(50*0.5+(n-50)*0.75)*1.2);
        break;
        case 151 ... 250:
        printf("Total electricity bill is %f",(50*0.5+100*0.75+(n-150)*1.2)*1.2);
        break;
        default :
        printf("Total electricity bill is %f",(50*0.5+100*0.75+100*1.2+(n-250)*1.5)*1.2);
    }
    
    return 0;
}