#include <stdio.h>

int main() {
   float a,b,Result;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b); 
    Result=(a+b/2 )*(a+b/2) - (a-b/2) *(a-b/2);
    printf("ab value =%.1f", Result);
}
    
    
