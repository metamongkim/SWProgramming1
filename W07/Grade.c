#include <stdio.h>
#define SIZE 3
#include <stdlib.h>
#include <time.h>

int main(void) {
    int st[5][3];
    srand((unsigned)time(NULL));
    int i, j;

    // Generate random scores for each student
    for (i=0; i<5; i++) {
        for (j=0; j<SIZE; j++) {
            st[i][j] = (rand()%100) + 1;
        }
    }

    // Convert scores to grades
    for (i=0; i<5; i++) {
        for (j=0; j<SIZE; j++) {
            if (st[i][j]>=90)
                st[i][j] = 'A';
            else if (st[i][j]>=80)
                st[i][j] = 'B';
            else if (st[i][j]>=70)
                st[i][j] = 'C';
            else if (st[i][j]>=60)
                st[i][j] = 'D';
            else
                st[i][j] = 'F';
        }
    }

    // Find the middle score among three scores
    int stG[5];
    for (i=0; i<5; i++) {
        if ((st[i][0] > st[i][1] && st[i][0] < st[i][2]) || (st[i][0] < st[i][1] && st[i][0] > st[i][2]))
            stG[i] = st[i][0];
        else if ((st[i][1] > st[i][0] && st[i][1] < st[i][2]) || (st[i][1] < st[i][0] && st[i][1] > st[i][2]))
            stG[i] = st[i][1];
        else
            stG[i] = st[i][2];
    }

    // Print the middle scores
    printf("grades of each studnet: ");
    for (i=0; i<5; i++)
        printf("%c ", stG[i]);
    printf("\n\n");

    // Calculate sum of each grades
    int sum=0, avg;
    for (i=0; i<5; i++)
        if (stG[i] == 'A')
            sum += 90;
        else if (stG[i] == 'B')
            sum += 80;
        else if (stG[i] == 'C')
            sum += 70;
        else if (stG[i] == 'D')
            sum += 60;
        else sum += 50;

    // Print avg grade of students
    avg = sum/5;  
    printf("avg grade of students: ");
    if (avg>=90)
        printf("%c", 'A');
    else if (avg>=80)
        printf("%c", 'B');
    else if (avg>=70)
        printf("%c", 'C');
    else if (avg>=60)
        printf("%c", 'D');
    else printf("%c", 'F');
    printf("\n");
    return 0;   
}