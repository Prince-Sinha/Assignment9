#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,b,c;
    printf("\n1.Check whether isosceles triangle or not");
    printf("\n2.Check whether right angled triangle or not");
    printf("\n3.Check whether equilateral triangle or not");
    printf("\nExit");
    printf("\nEnter your choice: ");
    scanf("%d",&n);
    while (~0)   {
        switch(n){
            case 1: printf("Enter the lenght of side of triangle: ");
                    scanf("%d%d%d",&a,&b,&c);
                    int iso= a==b || b==c || c==a;
                    switch (iso)
                    {
                    case 1: printf("Given triangle is isosceles");
                        break;
                    case 0: printf("Given triangle is isosceles");

                    }
            case 2:   printf("Enter the lenght of side of triangle: ");
                    scanf("%d%d%d",&a,&b,&c);
                    int rat= a*a + b*b=c*c || a*a =b*b+c*c  || a*a+c*c=b*b;
                    switch (rat)
                    {
                    case 1: printf("Given triangle is right angled triangle");
                        break;
                    case 0: printf("Given triangle is not right angled triangle");

                    }
            case 2:   printf("Enter the lenght of side of triangle: ");
                    scanf("%d%d%d",&a,&b,&c);
                    int rat= a=b=c;
                    switch (rat)
                    {
                    case 1: printf("Given triangle is equilateral");
                        break;
                    case 0: printf("Given triangle is not equilateral");

                    }

        }
    }
    