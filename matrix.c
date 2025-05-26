// Завдання 3: Функції для роботи з матрицями
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"

void fill_matrix(int matrix[][100], int rows, int cols, int random) {
    if (random) {
        srand(time(NULL));
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                matrix[i][j] = rand() % 441 - 220; // Діапазон -220..220
    }
    else {
        printf("Enter %dx%d matrix elements:\n", rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                scanf_s("%d", &matrix[i][j]);
    }
}

void print_matrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%4d ", matrix[i][j]);
        printf("\n");
    }
}

int sum_matrix(int matrix[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum += matrix[i][j];
    return sum;
}

int det_3x3(int matrix[][100], int row, int col) {
    int a = matrix[row][col];
    int b = matrix[row][col + 1];
    int c = matrix[row][col + 2];
    int d = matrix[row + 1][col];
    int e = matrix[row + 1][col + 1];
    int f = matrix[row + 1][col + 2];
    int g = matrix[row + 2][col];
    int h = matrix[row + 2][col + 1];
    int i = matrix[row + 2][col + 2];
    return a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
}
