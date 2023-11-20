#include <stdio.h>

// Function to calculate the average ASCII value of characters in a word using static variables
void avg_ascii(char word[], int length) {
    static int sum = 0;
    static int totalLength = 0;

    for (int i = 0; i < length; ++i) {
        sum += (int)word[i];
    }

    totalLength += length;

    double average = (double)sum / totalLength;

    printf("Word: %s\n", word);
    printf("Length: %d\n", totalLength);
    printf("Average ASCII value: %.2f\n", average);
}

int main() {
    char word[21]; // Assuming the word has 20 characters or less

    printf("Enter a word (up to 20 characters): ");
    scanf("%[^\n]", word);

    int length = 0;
    while (word[length] != '\0' && word[length] >= 'A' && word[length] <= 'Z') {
        length++;
    }

    avg_ascii(word, length);

    return 0;
}
