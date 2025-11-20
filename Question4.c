#include <stdio.h>

int main() {
    char ch;
    printf("Enter a message: ");
    while (1) {
        scanf("%c", &ch); 
        if (ch == '\n')
            break;
        if (ch >= 'a' && ch <= 'z') {
            ch += 3;
            if (ch > 'z')
                ch -= 26;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch += 3;
            if (ch > 'Z')
                ch -= 26;
        }
        printf("%c", ch);  
    }
    printf("\n");
    return 0;
}
