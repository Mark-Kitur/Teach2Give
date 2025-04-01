/*Write a program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string. */
#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char str[]) {
    int i = 0;
    int capitalize = 1; 

    while (str[i] != '\0') {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]); 
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1; 
        }
        i++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    capitalizeWords(str);
    printf("Capitalized String: %s", str);

    return 0;
}
