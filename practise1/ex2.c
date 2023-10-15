#include <stdio.h>
int main() {
int a;
int b;

printf("Enter number 1: ");
scanf("%d", &a);

printf("Enter number 2: ");
scanf("%d", &b);
int c = a + b;
printf("The sum of your numbers is %d", c);
return 0;
}