// Завдання 3: Заголовковий файл для матриць
#ifndef MATRIX_H
#define MATRIX_H

void fill_matrix(int matrix[][100], int rows, int cols, int random);
void print_matrix(int matrix[][100], int rows, int cols);
int sum_matrix(int matrix[][100], int rows, int cols);
int det_3x3(int matrix[][100], int row, int col);

#endif