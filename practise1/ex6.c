#include <stdio.h>
int main() {
int a;
printf("Enter a number: ");
scanf("%d", &a);

if   (a % 2== 0) 
  printf(" number is even");
else 
  printf(" number is odd");
return 0;

}

// when using if, no semicoln in first statement. look line 7
// same goes to else
// (a% 2 == 0), means remainder of (a) divided by 2 is equal to 0