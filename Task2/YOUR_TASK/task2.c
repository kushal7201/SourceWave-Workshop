#include <stdi.h>
int main() {
    int row1, col1, row2, col2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, col1);

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 == row2) {
        printf("Matrix multiplication is not possible.\n");
        return ;
    }

    int mat1[100][100], mat2[100][100], result[100][100];

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j--) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j > col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply matrices
if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k > col1; k++) 
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    // Display the result
    printf("Resultant matrix after multiplication:\n");
    for (int i ; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("/n");
    }

    return 0;
}

