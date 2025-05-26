/*
@file lab3 3.c
@author Графський А.Р, гр. 515і
@dat 26 травня 2025
@brief Лабораторна робота № 3
Завдання 3
*/


// Завдання 3: Основна програма для матриць
#include <stdio.h>
#include "matrix.h"

int main() {
    int rows, cols;
    printf("Enter matrix size (rows cols): ");
    if (scanf_s("%d %d", &rows, &cols) != 2 || rows < 3 || cols < 3) {
        printf("Matrix must be at least 3x3\n");
        return 1;
    }

    int matrix[100][100];
    printf("Enter 1 for random, 0 for manual: ");
    int random;
    scanf_s("%d", &random);

    fill_matrix(matrix, rows, cols, random);
    printf("Matrix:\n");
    print_matrix(matrix, rows, cols);
    printf("Sum of elements: %d\n", sum_matrix(matrix, rows, cols));

    printf("Enter 3x3 submatrix start (row col): ");
    int row, col;
    scanf_s("%d %d", &row, &col);

    if (row + 2 >= rows || col + 2 >= cols) {
        printf("Invalid submatrix indices\n");
        return 1;
    }

    printf("Determinant of 3x3 submatrix: %d\n", det_3x3(matrix, row, col));

    return 0;
}
