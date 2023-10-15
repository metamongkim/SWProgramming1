#include <stdio.h>
#include <string.h>
#define SIZE 99

int main(void) {
    char s[SIZE];
    int i;
    int wcnt=0, wlcnt=0;

    printf("input string: ");
    scanf(" %99[^\n]", s);

    if (s[0]!=' ') {
        wcnt++;
        wlcnt++;
    }

    int len = strlen(s);
    for (i=1; i<len; i++) {
        if (s[i-1]==' ' && s[i]!=' ') wcnt++; 
        if (s[i]!=' ') wlcnt++;
    }

    printf("words: %.2d\n", wcnt);
    if (wcnt > 0) {
        printf("Average length of words: %.2lf\n", (double)wlcnt / wcnt);
    } else {
        printf("Average length of words: 0.00\n");
    }
    return 0;
}