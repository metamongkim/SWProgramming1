#include <stdio.h>

// Function to calculate the factorial of a number recursively
long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the number of different binary trees recursively
long long countBinaryTrees(int n) {
    return factorial(2 * n) / (factorial(n + 1) * factorial(n));
}

int main() {
    int n;
    printf("Enter the number of nodes (1-10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
    } else {
        long long result = countBinaryTrees(n);
        printf("Number of different binary trees: %lld\n", result);
    }

    return 0;
}
