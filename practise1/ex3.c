#include <stdio.h>
int main() {
int a;
float Typefloat;
double Typedouble;
char Typechar;

printf("The size of int is %ld bytes \n", sizeof(a));
printf("The size of float is %ld bytes \n", sizeof(Typefloat));
printf("The size of double is %ld bytes \n", sizeof(Typedouble));
printf("The size of char is %ld bytes \n", sizeof(Typechar));
return 0;
}

//  Firstly, gave name to each format
// The sizeof(variable)operator computes the size of a variable
// ld, lu or zu can be used for format specifier in each line to print. I used ld
