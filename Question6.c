#include <stdio.h>

int main() {
    char names[5][20];   
    int marks[5];
    int i, j;
    int highest = -1;
    int topIndex = 0;
    int sum = 0;
    printf("Enter names and marks of 5 students:\n\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);     
        printf("Enter mark of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        printf("\n");
    }
    printf("\n----------------------------------\n");
    printf("   Student Name     |   Marks\n");
    printf("----------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("   %-15s |   %d\n", names[i], marks[i]);
    }
    printf("----------------------------------\n\n");
    for (i = 0; i < 5; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
            topIndex = i;
        }
    }
    for (i = 0; i < 5; i++) {
        sum += marks[i];
    }
    float average = sum / 5.0;
    printf("Top Student: %s with %d marks\n", names[topIndex], highest);
    printf("Class Average: %.2f\n", average);
    return 0;
}
