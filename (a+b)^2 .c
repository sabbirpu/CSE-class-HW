#include <stdio.h>

int main() {
   float a,b,Result;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    Result=(a*a)+2*(a*b)+(b*b);
    printf("(a+b)^2=%.1f",Result);
}
    
