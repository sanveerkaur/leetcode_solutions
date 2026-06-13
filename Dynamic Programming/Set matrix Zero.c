void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
int n = matrixSize;
int m = matrixColSize[0];
int col0 = 1; // Variable to handle the first column collision

// Step 1: Mark the first row and first column using inner elements
for (int i = 0; i < n; i++) {
if (matrix[i][0] == 0) col0 = 0;
for (int j = 1; j < m; j++) {
if (matrix[i][j] == 0) {
matrix[i][0] = 0;
matrix[0][j] = 0;
}
}
}

// Step 2: Use the markers in the first row and column to update the inner matrix
// We iterate backwards to preserve the marker information
for (int i = n - 1; i >= 0; i--) {
for (int j = m - 1; j >= 1; j--) {
if (matrix[i][0] == 0 || matrix[0][j] == 0) {
matrix[i][j] = 0;
}
}
// Finally, update the first column based on the col0 tracker
if (col0 == 0) matrix[i][0] = 0;
}
} 