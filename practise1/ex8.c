#include <stdio.h>
int main() {
int num, count, fact = 1;
printf("Enter a number from zero to infinty: ");
scanf("%d", &num);

for (count = 1; count <= num; count++);{
     
       fact *= count;
}
printf(" The factorial of is %d\n",  fact);


return 0;
}