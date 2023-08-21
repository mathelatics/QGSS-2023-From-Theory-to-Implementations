#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stddef.h>


typedef struct {
    size_t rows;       // Number of rows in the matrix
    size_t columns;    // Number of columns in the matrix
    double complex* elements;   // Array of complex elements in the matrix
} Matrix;

Matrix* createMatrix(size_t rows, size_t columns);
void destroyMatrix(Matrix* matrix);
double complex getElement(const Matrix* matrix, size_t row, size_t column);
void setElement(Matrix* matrix, size_t row, size_t column, double complex value);

#endif /* MATRIX_H */