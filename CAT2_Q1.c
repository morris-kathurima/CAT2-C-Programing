#include <stdio.h>

int main() {
    // Declared and initialized 2D array (from part ii)
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    int i, j;
    int rows = 2;
    int cols = 4;

    printf("Elements of the scores array:\n");

    // Outer loop for rows
    for (i = 0; i < rows; i++) {
        // Inner loop for columns (elements in the current row)
        for (j = 0; j < cols; j++) {
            // Print the element at current row 'i' and column 'j'
            printf("%d\t", scores[i][j]);
        }
        // Print a newline after each row is completely printed
        printf("\n");
    }

    return 0;
}
