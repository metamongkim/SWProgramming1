#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main(void) {
    srand((unsigned)time(NULL));
    int ary[SIZE], i;
    int cntA=0, cntB=0, cntC=0, cntD=0;

    for (i=0; i<SIZE; i++) {
        ary[i] = (rand()%100) + 1;
        if (ary[i]<50 && ary[i]%2==1) {
            cntA++;
        } else if (ary[i]>50 && ary[i]%2==1) {
            cntB++;
        } else if (ary[i]<50 && ary[i]%2==0) {
            cntC++;
        } else {
            cntD++;
        }   
    }

    printf("Group_A: %d\n", cntA);
    printf("Group_B: %d\n", cntB);
    printf("Group_C: %d\n", cntC);
    printf("Group_D: %d\n", cntD);

    int MAX, MIN;
    char maxC, minC;
    if (cntA>cntB && cntA>cntC && cntA>cntD) {
        MAX = cntA;
        maxC = 'A';
    } else if (cntB>cntA && cntB>cntC && cntB>cntD) {
        MAX = cntB;
        maxC = 'B';
    } else if (cntC>cntA && cntC>cntB && cntC>cntD) {
        MAX = cntC;
        maxC = 'C';
    } else {
        MAX = cntD;
        maxC = 'D';
    }
    
    if (cntA<cntB && cntA<cntC && cntA<cntD) {
        MIN = cntA;
        minC = 'A';
    } else if (cntB<cntA && cntB<cntC && cntB<cntD) {
        MIN = cntB;
        minC = 'B';
    } else if (cntC<cntA && cntC<cntB && cntC<cntD) {
        MIN = cntC;
        minC = 'C';
    } else {
        MIN = cntD;
        minC = 'D';
    }

    printf("Max_group: %c(%d)", maxC, MAX);
    printf("\n");
    printf("Min_group: %c(%d)", minC, MIN);
    printf("\n");
    return 0;
}