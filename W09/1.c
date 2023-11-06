#include <stdio.h>

int main(void) {
    int n, n1, n2, new;

    printf("input n(10~20): ");
    scanf("%d", &n);

    n1=1;
    n2=1;
    new = n1 + n2;

    printf("f(%d) = %d\n", 1, n1);
    printf("f(%d) = %d\n", 2, n2);
    printf("f(%d) = %d\n", 3, new);

    for (int i=4; i<=n; i++) {
        n1=n2;
        n2=new;
        new=n1+n2;
        printf("f(%d) = %d\n", i, new);
    }
}