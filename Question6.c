//Write a program that counts the number of vowels in a sentence.
#include <stdio.h>
#include <ctype.h>

int countVowels(char str[]) {
    int count = 0;
    char vowels[] = "aeiouAEIOU"; 
    int i = 0;

    while (str[i] != '\0') {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (str[i] == vowels[j]) {
                count++;
                break;
            }
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 
    printf("Vowel count: %d\n", countVowels(str));
    return 0;
}
