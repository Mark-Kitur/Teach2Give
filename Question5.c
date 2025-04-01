// Write a program that takes an integer as input and returns an integer with reversed digit ordering
#include <stdio.h>

int reverseInt(int num) {
    int reversed = 0;
    if (num < 0) {
        num = -num; 
    }
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed; 
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Reversed: %d\n", reverseInt(num));
    
    return 0;
}
