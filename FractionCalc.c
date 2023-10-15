#include <stdio.h>
#define SIZE 100

int main(void) {
    int fAry[SIZE];
    int i=0;

    while (1) {
        printf("Input fractions (numerator/denominator): ");
        int numerator, denominator;
        int result = scanf("%d/%d", &numerator, &denominator);

        if (result != 2) {
            break; // Exit the loop if the input is not in the expected format
        }

        fAry[i] = numerator;
        fAry[i + 1] = denominator;
        i += 2;
    }

    for (int j = 0; j < i; j += 2) {
        if (fAry[j]%fAry[j+1] != 0)
            if (fAry[j+1]%(fAry[j]%fAry[j+1]) == 0)
                printf("%d/%d(%d+%d/%d), ",
                fAry[j], fAry[j + 1], fAry[j]/fAry[j+1], (fAry[j]%fAry[j+1])/(fAry[j]%fAry[j+1]), fAry[j+1]/(fAry[j]%fAry[j+1]));
            else
                printf("%d/%d(%d+%d/%d), ",
                fAry[j], fAry[j + 1], fAry[j]/fAry[j+1], fAry[j]%fAry[j+1], fAry[j+1]);
        else 
            printf("%d/%d(%d)", fAry[j], fAry[j + 1], fAry[j]/fAry[j+1]);
    }

    return 0;
}