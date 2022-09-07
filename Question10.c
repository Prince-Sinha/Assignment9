#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,con;
    float r1,r2,r;
    printf("Enter the coffecient of x2: ");
    scanf("%d",&a);
    printf("Enter the coffecient of x: ");
    scanf("%d",&b);
    printf("Enter the constant term: ");
    scanf("%d",&c);
    d=(b*b-4*a*c);
    con=d>=0;
    switch (con){
     case 1:  
      r1=(-b+sqrt(d))/(2*a*c);
      r2=(b+sqrt(d))/(2*a*c);
      printf("The root are %.3f & %.3f",r1,r2);
      break;
         
     case 0:   
       r=sqrt(-d)/2*a*c;             
       printf("The complex root are %.3f + i%.3f & %.3f - i%.3f",b/2*a*c,r,b/2*a*c,r);
       break;

    }
    
  return 0;    
}