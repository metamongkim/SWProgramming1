#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 21

// Function to perform iterative binary search
int binary_search(int arr[], int size, int target, int *comparisons) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        (*comparisons)++; // Increment the comparison count

        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[21];
    int target, x, i=0;

    srand((unsigned)time(NULL));
    while (i<LENGTH) {
        x = (rand()%100) + 1;
        if (x<101 && x >60) {
            arr[i] = x;
            i++;
        }
    }

    printf("Enter a number to search (61-100): ");
    scanf("%d", &target);

    int comparisons = 0;
    int index = binary_search(arr, 21, target, &comparisons);

    if (index != -1) {
        printf("Found at index %d with %d comparisons.\n", index, comparisons);
    } else {
        printf("NOT FOUND with %d comparisons.\n", comparisons);
    }

    return 0;
}
