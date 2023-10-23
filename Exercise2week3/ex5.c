#include <stdio.h>

char* concatStrings(char str1[], const char str2[]){
int i, j;
for (i =0; str1[i]; i++){
    }
for (j = 0; str2[j]; j++){
    str1[i + j] = str2[j];
}
    str1[i + j] = '\0';
    return str1;
}
 int main() {
    char fststr[100] = "Hello, " ;
    const char sndstr[] = "World" ;
    char* result = concatStrings(fststr,sndstr);
    printf("%s\n", result);

 }