#include <stdio.h>

float sphere  (float r)   // named the function sphere and gave variable r
{
return((4 * 3.14 * r * r * r) / 3);  // input the volume equation with r 
}

int main () {
int radius = 4;    // made a variable so i can input radius when printing
float s = sphere(radius);  // s return to the sephere function 
printf("The voulume of sphere is %f with radius %d: \n ",  s, radius);


}