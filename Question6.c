//Write a program that counts the number of vowels in a sentence.
#include <stdio.h>
#include <ctype.h>

int countWords(char str[]) {
    int count = 0, i = 0;

    while (str[i] != '\0') {
        if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1]))) {
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 
    printf("Word count: %d\n", countWords(str));
    return 0;
}
