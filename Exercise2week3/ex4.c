#include <stdio.h>
int prime(int num) { 
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; 
}

int main() {
    int usernum;
    printf("Please enter a number: ");
    scanf("%d", &usernum);

    int x = prime(usernum);
    printf("%d", x);
    return 0;
}