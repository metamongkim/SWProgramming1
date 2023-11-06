#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
#define SIZE 5

int getMax(int *);
int getMin(int *);

int main(void) {
    char name[SIZE];
    char gr[SIZE][SIZE];

    for (int i=0; i<SIZE; i++) {
        printf("input student name, grade: ");
        scanf(" %c", &name[i]); //엔터를 스페이스 공간이 먹어서 오류 해결
        for (int j=0; j<SIZE; j++) {
            printf("input grade: ");
            scanf(" %c", &gr[i][j]);
        }
        printf("\n");
    }
}

int getMax(int *arr) {
    int i;
    int max= *arr;
    for (i=0; i<SIZE; i++) {
        if (*arr>max)
            
    }
}
