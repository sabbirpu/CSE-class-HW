#include <stdio.h>

int main() {
   float a,b,Result;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    Result=((a+b)*(a+b) + (a-b)*(a-b))/2; 
    printf("a^2+b^2=%.1f",Result);
}
    
