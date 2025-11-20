#include <stdio.h>

int main() {
    char ch;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    printf("Enter a string: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            vowels++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    return 0;
}
