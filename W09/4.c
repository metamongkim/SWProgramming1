#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n, i, j, tmp;
    int a[10], b[10], c[10], d[10];
    int cntA=0, cntB=0, cntC=0, cntD=0;

    srand((unsigned)time(NULL));

    for (i=0; i<30; i++) {
        n = (rand()%100) + 1;

        if (n<50 && n%2==1) {
            a[cntA] = n;
            cntA++;
        } else if (n>50 && n%2==1) {
            b[cntB] = n;
            cntB++;
        } else if (n<50 && n%2==0) {
            c[cntC] = n;
            cntC++;
        } else {
            d[cntD] = n;
            cntD++;
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < (10 - 1) - i; j++) {
            if (a[j] > a[j + 1]) {	// 버블 정렬 사용
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
            if (b[j] > b[j + 1]) {	// 버블 정렬 사용
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
            if (c[j] > c[j + 1]) {	// 버블 정렬 사용
                tmp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp;
            }
            if (d[j] > d[j + 1]) {	// 버블 정렬 사용
                tmp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = tmp;
            }
        }
    }

    printf("A: ");
    for (i=0; i<10; i++) 
        printf("%d ", a[i]);    
    printf("\n");

    printf("B: ");
    for (i=0; i<10; i++) 
        printf("%d ", b[i]);
    printf("\n");

    printf("C: ");
    for (i=0; i<10; i++)
        printf("%d ", c[i]);
    printf("\n");

    printf("D: ");
    for (i=0; i<10; i++) 
        printf("%d ", d[i]);
    printf("\n");
        
}