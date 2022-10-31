bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize)
{
    for(int i=0; i<matrixSize; i++)
        for(int j=0; j<*matrixColSize; j++)
            if(i-1>=0 && j-1>=0)
                if(matrix[i][j] != matrix[i-1][j-1])
                    return false;
    return true;
}