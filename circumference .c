#include <stdio.h>

int main() {
    // Write C code here
   float r,circumference;
    float pi;
    printf("Enter the value of r:");
    scanf("%f",&r);
    printf("Enter the value of pi:");
    scanf("%f",&pi);
    circumference=2*pi*r;
    printf("circumference value=%.3f",circumference);
}
