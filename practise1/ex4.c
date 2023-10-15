#include <stdio.h>
int main(){
float r;
printf("Enter the size of your raduis in cm : ");
scanf("%f", &r);

float c = 3.14 * r * r ;
printf("Your area of circle is %f cm2 \n", c);
return 0;

}