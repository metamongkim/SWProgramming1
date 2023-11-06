/*#include <stdio.h>
#define SIZE 5

int main(void) {
    char name[SIZE];
    char gr[]

}*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_GRADES 5

// Function to calculate the final grade from 5 individual grades
char calculateFinalGrade(char grades[]) {
    char grade_counts[5] = {0};

    for (int i = 0; i < MAX_GRADES; i++) {
        grade_counts[grades[i] - 'A']++;
    }

    // Determine the final grade
    char final_grade = 'A';
    for (int i = 1; i < 5; i++) {
        if (grade_counts[i] > grade_counts[final_grade - 'A']) {
            final_grade = 'A' + i;
        }
    }

    return final_grade;
}

int main() {
    char students[MAX_STUDENTS];
    char korean_grades[MAX_STUDENTS][MAX_GRADES];
    char math_grades[MAX_STUDENTS][MAX_GRADES];

    // Read student names and grades for Korean and math
    for (int i = 0; i < MAX_STUDENTS; i++) {
        char name;
        printf("Enter student %d's name (one character): ", i + 1);
        scanf(" %c", &name);
        students[i] = name;

        printf("Enter student %c's 5 Korean grades (A, B, C, D, F): ", name);
        for (int j = 0; j < MAX_GRADES; j++) {
            scanf(" %c", &korean_grades[i][j]);
        }

        printf("Enter student %c's 5 Math grades (A, B, C, D, F): ", name);
        for (int j = 0; j < MAX_GRADES; j++) {
            scanf(" %c", &math_grades[i][j]);
        }
    }

    // Calculate the final grades and average scores
    char final_grades[MAX_STUDENTS];
    float average_scores[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        final_grades[i] = calculateFinalGrade(korean_grades[i]);
        final_grades[i] = (final_grades[i] > calculateFinalGrade(math_grades[i])) ? final_grades[i] : calculateFinalGrade(math_grades[i]);

        int korean_score = final_grades[i] - 'A';
        int math_score = final_grades[i] - 'A';
        average_scores[i] = (korean_score + math_score) / 2.0;
    }

    // Sort students based on their average scores in descending order
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = 0; j < MAX_STUDENTS - 1 - i; j++) {
            if (average_scores[j] < average_scores[j + 1]) {
                // Swap students
                char temp_name = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp_name;

                char temp_final_grade = final_grades[j];
                final_grades[j] = final_grades[j + 1];
                final_grades[j + 1] = temp_final_grade;

                float temp_average_score = average_scores[j];
                average_scores[j] = average_scores[j + 1];
                average_scores[j + 1] = temp_average_score;
            }
        }
    }

    // Print the rankings and average scores
    printf("Rankings and Average Scores:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%d: %c %.2f  ", i + 1, students[i], average_scores[i]);
    }
    printf("\n");

    return 0;
}
