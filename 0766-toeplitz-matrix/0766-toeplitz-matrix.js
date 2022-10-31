/**
 * @param {number[][]} matrix
 * @return {boolean}
 */
var isToeplitzMatrix = function(matrix) 
{
    for(i=0; i<matrix.length; i++)
        for(j=0; j<matrix[i].length; j++)
            if(i-1>=0 && j-1>=0)
                if(matrix[i][j] != matrix[i-1][j-1])
                    return false;
    return true;
};