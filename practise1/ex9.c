#include <stdio.h>
int main() {
float days, dis=2.6;
printf("Enter the number of days: ");
scanf("%f", &days);
float travel = days * dis;
printf("The light would %f x 10^10 km in %f days.\n ", travel, days);
return 0;
}

// better way to right this code?