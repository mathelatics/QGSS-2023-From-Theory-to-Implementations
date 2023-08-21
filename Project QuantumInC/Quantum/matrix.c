#include "matrix.h"
#include <stdlib.h>// for memory allocation

// Function to create a matrix
Matrix* createMatrix(size_t rows, size_t columns) {
    Matrix* matrix = (Matrix*)malloc(sizeof(Matrix));
    if (matrix != NULL) {
        matrix->rows = rows;
        matrix->columns = columns;
        matrix->elements = (double complex*)malloc(rows * columns * sizeof(double complex));
        if (matrix->elements == NULL) {
            // Error handling for memory allocation failure
            free(matrix);
            return NULL;
        }
        // Initialize each element in the matrix to zero
        for (size_t i = 0; i < rows * columns; i++) {
            matrix->elements[i] = 0.0 + 0.0 * I;
        }
    }
    return matrix;
}

// Function to destroy a matrix and free the allocated memory
void destroyMatrix(Matrix* matrix) {
    if (matrix != NULL) {
        if (matrix->elements != NULL) {
            free(matrix->elements);
        }
        free(matrix);
    }
}

// Function to access the element at a specific row and column in the matrix
double complex getElement(const Matrix* matrix, size_t row, size_t column) {
    // Check if the row and column indices are within the valid range
    if (row >= matrix->rows || column >= matrix->columns) {
        // Error handling for invalid indices
        return 0.0 + 0.0 * I;
    }
    // Access and return the element at the specified row and column
    return matrix->elements[row * matrix->columns + column];
}

// Function to set the element at a specific row and column in the matrix
void setElement(Matrix* matrix, size_t row, size_t column, double complex value) {
    // Check if the row and column indices are within the valid range
    if (row >= matrix->rows || column >= matrix->columns) {
        // Error handling for invalid indices
        return;
    }
    // Set the element at the specified row and column to the given value
    matrix->elements[row * matrix->columns + column] = value;
}