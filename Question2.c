#include <stdio.h>

int main() {
    char email[200];
    int i = 0;
    int atPos = -1;
    char ch;
    printf("Enter an email address: ");
    while ((ch = getchar()) != '\n' && ch != EOF && i < 199) {
        email[i] = ch;
        if (ch == '@')
            atPos = i;
        i++;
    }
    email[i] = '\0';
    if (atPos == -1) {
        printf("Invalid email: '@' not found.\n");
        return 0;
    }
    printf("Domain: ");
    int j = atPos + 1;
    while (email[j] != '\0') {
        putchar(email[j]);
        j++;
    }
    putchar('\n');
    return 0;
}
