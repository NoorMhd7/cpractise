#include <stdio.h>
int main() {
float temp;
printf("Please enter a temperature in fahrenheit: ");
scanf("%f", &temp);
float celsius = ((temp - 32) * 5) / 9;

printf("Your temperature in degree celsius is %f", celsius);
return 0;


}

// why, ((temp - 32) * (5/9)) doesnt work for line 6?