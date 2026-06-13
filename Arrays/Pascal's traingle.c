int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    *returnSize = numRows;

    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

    int** triangle = (int**)malloc(numRows * sizeof(int*));

    for(int row = 0; row < numRows; row++){

        (*returnColumnSizes)[row] = row + 1;

        triangle[row] = (int*)malloc((row+1) * sizeof(int));

        triangle[row][0] = 1;
        triangle[row][row] = 1;

        for(int col = 1; col < row; col++){

            triangle[row][col] =
                triangle[row-1][col-1] +
                triangle[row-1][col];
        }
    }

    return triangle;
}