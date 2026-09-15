#include <stdio.h>

int main() {
  
   float r,Area;
    float pi;
    printf("Enter the value of r:");
    scanf("%f",&r);
    printf("Enter the value of pi:");
    scanf("%f",&pi);
    Area=0.5*pi*r*r;
    printf("Area of semicircular value=%.3f",Area);
}
