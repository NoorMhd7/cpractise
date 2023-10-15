#include <stdio.h>
int main () {
int P , T;
float R;
printf("This formula will help you find the simple interest for your loan.");

printf("\nPlease enter the principle amount of your loan: ");
scanf("%d", &P);

printf("Please enter the rate of intrest you were charged with: ");
scanf("%f", &R);

printf("For how many years would your loan last: ");
scanf("%d", &T);

float SI = ((P * R * T)/100);

printf("The extra amount you will pay for your loan is %f", SI);


}