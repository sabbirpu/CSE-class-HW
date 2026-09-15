#include <stdio.h>

int main() {
    // Write C code here
   float length,width,height,volume;
    printf("Enter the value of length:");
     scanf("%f",&length);
    printf("Enter the value of width:");
     scanf("%f",&width);
    printf("Enter the value of height:");
    scanf("%f",&height);
   // scanf("%f",&length);
   // scanf("%f",&width);
   // scanf("%f",&height);
    volume=length*width*height;
    printf("volume value=%.3f",volume);
}
    
