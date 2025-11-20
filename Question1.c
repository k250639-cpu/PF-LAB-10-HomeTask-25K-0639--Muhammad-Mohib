#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';
    if (strlen(password) < 8) {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }
    for (int i = 0; password[i] != '\0'; i++) {
        char ch = password[i];
        if (ch >= 'A' && ch <= 'Z') {
            hasUpper = 1;
        }
        else if (ch >= '0' && ch <= '9') {
            hasDigit = 1;
        }
        else if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%') {
            hasSpecial = 1;
        }
    }
    if (hasUpper && hasDigit && hasSpecial) {
        printf("Password is strong!\n");
    } else {
        printf("Password is weak. It must contain:\n");
        if (!hasUpper)  printf("- At least one uppercase letter\n");
        if (!hasDigit)  printf("- At least one digit\n");
        if (!hasSpecial)printf("- At least one special character (!, @, #, $, %)\n");
    }
    return 0;
}
