#include <stdio.h>
#include <stdlib.h>

int main() {
    int numRows, numCols;
    printf("Enter a number of rows: ");
    scanf("%i", &numRows);
    printf("Enter a number of columns: ");
    scanf("%i", &numCols);

    int** matrix = malloc(sizeof(int*) * numRows);
    for (int i = 0; i < numRows; i++) {
        matrix[i] = malloc(sizeof(int) * numCols);
    }
    

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            int input;
            printf("Enter a value for matrix[%i][%i]: ", i, j);
            scanf("%i", &input);
            matrix[i][j] = input;
        }
    }

    printf("Here is your matrix:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < numRows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    matrix = NULL;

    return 0;
}
