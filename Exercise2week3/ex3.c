#include <stdio.h>

int str_len(char str[100]) {     // problem with iteration, must learn
int count = 0;                   
int i;
for (i = 0; str[i] != '\0'; i++)
      {count ++;}
return count;
}
int main(){
char x[100];
printf("Please enter a string: ");
scanf("%s", x);
int letter_count = str_len(x);
printf("Your string count is %d", letter_count);


}
    