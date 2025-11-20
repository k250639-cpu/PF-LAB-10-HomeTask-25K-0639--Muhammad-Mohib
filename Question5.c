#include <stdio.h>

int main() {
    int n;
    char name[50], topName[50];
    int mark, highest = -1;
    int i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", name);  
        printf("Enter mark: ");
        scanf("%d", &mark);
        if (mark > highest) {
            highest = mark;
            j = 0;
            while (name[j] != '\0') {
                topName[j] = name[j];
                j++;
            }
            topName[j] = '\0';
        }
    }
    printf("\nHighest Scorer: %s\n", topName);
    printf("Mark: %d\n", highest);
    return 0;
}
