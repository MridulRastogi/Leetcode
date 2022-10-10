class Solution 
{
    public int[][] transpose(int[][] matrix) 
    {
        int r = matrix.length, c = matrix[0].length;
        int ar[][] = new int[c][r];
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                ar[j][i] = matrix[i][j];
        return ar;
    }
}