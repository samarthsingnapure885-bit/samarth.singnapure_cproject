#include <stdio.h>

int main() {
    int n, i;
    int marks[50];
    int total = 0;
    float percentage;
    char grade;

    // Ask number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks for each subject
    for (i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = (float)total / (n * 100) * 100;

    // Assign grade based on percentage
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display results
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nGrade = %c", grade);

    return 0;
}